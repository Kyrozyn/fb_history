<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>Bengkel Baleendah</title>
<link href="1.css" rel="stylesheet" type="text/css" />
<style type="text/css">
<!--
.ISI {font-family: "Segoe Print"}
.style1 {font-size: x-large}
table {
	font-family: "Segoe Print";
}

}

-->
</style>
</head>
<body>

<marquee>
<span class="Mastaka"><strong>Bengkel Motor Baleendah</strong></span>
</marquee>
<div align="center" class="Menuaa">
    <h3 class="ISI">| <a href="index.php">Home</a> | <a href="sp.php">Spare Part</a> | <a href="oli.php">OLI</a> | <a href="about.php">About</a> | </h3>
</div>

<div>
 
<form name="bengkel" id="bengkel" method="get">
<table width="797" border="0">
  <tr>
    <td width="334">NO Plat Motor : </td>
    <td width="453"><input name="no" type="text" /></td>
  </tr>
  <tr>
    <td>Ganti Spare Part :</td>
    <td><select name="sparepart" id="sparepart">
      <option value="1">Carburator & Engine</option>
      <option value="2">Gear Set</option>
      <option value="3">Lampu LED</option>
      <option value="4">Electrical</option>
      <option value="5">Ban Luar Dalam</option>
    </select></td>
  </tr>
  <tr>
    <td>Ganti Oli : </td>
    <td><select name="oli" id="oli">
      <option value="1">Honda MPX</option>
      <option value="2">Shell Helix</option>
      <option value="3">YAMALUBE</option>
      <option value="4">Fastron</option>
      <option value="5">Top 1</option>
    </select></td>
  </tr>
  <tr>
    <td>Biaya Service : </td>
    <td>Rp. 50.000 </td>
  </tr>
  <tr>
    <td>Member</td>
    <td>Ya<input name="member" type="radio" value="member" />  Tidak<input name="member" type="radio" value="bukan member" /></td>
  </tr>
  <tr>
    <td><input type="submit" value="hitung" name="ht" />
      <input type="submit" value="reset" name="ht2" /></td>
    <td>&nbsp;</td>
  </tr>
</table>
</form>
<p>
<?php

error_reporting(E_ALL ^ E_NOTICE);
error_reporting(E_ERROR|E_WARNING);
$plat1 = $_GET['no'];
$sparepart = $_GET['sparepart'];
$oli = $_GET['oli'];
$member = $_GET['member'];
$ht= $_GET['ht'];

if($ht=="hitung"){
//Logika if sparepart
if($sparepart==1){
		$hrsp=500000;
		$nmsp='Carbulator & Engine';
	}
	else if($sparepart==2){
		$hrsp=200000;
		$nmsp='Gear Set';
	}
	else if($sparepart==3){
		$hrsp=50000;
		$nmsp='Lampu LED';
	}
	else if($sparepart==4){
		$hrsp=100000;
		$nmsp='Electrical';
	}
	else if($sparepart==5){
		$hrsp=25000;
		$nmsp='Ban Luar Dalam';
	}
//Logika if OLI
if($oli==1){
	$hroli=35000;
	$nmoli='Honda MPX';
}
else if($oli==2){
	$hroli=30000;
	$nmoli='Shell Helix';
}
else if($oli==3){
	$hroli=35000;
	$nmoli='Yamalube';
}
else if($oli==4){
	$hroli=50000;
	$nmoli="Fastron";
}
else if($oli==5){
	$hroli=40000;
	$nmoli="Top 1";
}
}

else {
$hrsp=" ";
$hroli=" ";
$nmoli=" ";
$nmsp=" ";
}
//harga&potongan
if($member=='member'){
$pot=0.9;}

if($member=='bukan member'){
$pot=1;}
$bser=50000;
$jumlah=($hrsp+$hroli+$bser)*$pot; 
?>
  <br />
=========<br />
<span class="ISI">Rincian yang anda pesan : </span></p>
<table width="874" border="0">
  <tr>
    <td width="259">No Plat Motor </td>
    <td width="605">: 
    <input name="text" type="text" disabled="disabled" value="<?php echo $plat1; ?>"/></td>
  </tr>
  <tr>
    <td>Sparepart </td>
    <td>:
    <input name="text" type="text" disabled="disabled" value="<?php echo $nmsp; ?>"/> 
    <input name="text" type="text" disabled="disabled" value="Rp. <?php echo $hrsp; ?>"/></td>
  </tr>
  <tr>
    <td>Oli</td>
    <td>:
    <input name="text2" type="text" disabled="disabled" value="<?php echo $nmoli; ?>"/>
    <input name="text23" type="text" disabled="disabled" value="Rp. <?php echo $hroli; ?>"/></td>
  </tr>
  <tr>
    <td>Biaya Service </td>
    <td>: 
    <input name="text24" type="text" disabled="disabled" value="Rp. 50000"/></td>
  </tr>
  <tr>
    <td>Member</td>
    <td>:
    <input name="text22" type="text" disabled="disabled" value="<?php echo $member; ?>"/></td>
  </tr>
  <tr>
    <td>Jumlah yang harus dibayar </td>
    <td>: 
    <input name="text222" type="text" disabled="disabled" value="Rp. <?php echo $jumlah; ?>"/></td>
  </tr>
</table>
<p><br />
</p>
