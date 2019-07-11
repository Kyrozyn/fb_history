#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
#include<string>
#define ARRAY_SIZE 999

void input();
void tampil();
void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int index=0;
int nilaia[999], nilaib[999], nilaic[999], nilaius[999];


main(){
       int pil;
	system("color 1a");
	printf("===============================================================================\n	                      Penilaian Kelulusan\n	                         SDN MAGUNG I\n===============================================================================\n");
	gotoxy(25,5);printf("=========================");
	gotoxy(25,6);printf("|   1. Input Data       |");
	gotoxy(25,7);printf("|   2. Hasil            |");
	gotoxy(25,8);printf("|   3. Keluar           |");
	gotoxy(25,9);printf("=========================");
		gotoxy(0,10);
	printf("\n\nPilih = ");scanf("%i", &pil);
	if(pil==1){
		input();
	}
	else if(pil==2){
		tampil();
	}
		else if(pil==3){
		return 0;
	}

	else{
		printf("\nMaaf pilihan anda salah!");
		getch();
		system("cls");
		main();
	}
       }
       
void input(){
            system("cls");
            int pill, sena, nina, senb, ninb, senc, ninc, senus, ninus;
            	printf("===============================================================================\n	                      Penilaian Kelulusan\n	                         SDN MAGUNG I\n===============================================================================\n");
	gotoxy(25,5);printf("=========================");
	gotoxy(25,6);printf("|   1. Informasi        |");
	gotoxy(25,7);printf("|   2. Input Nilai Kls4 |");
	gotoxy(25,8);printf("|   3. Input Nilai Kls5 |");
	gotoxy(25,9);printf("|   4. Input Nilai Kls6 |");
	gotoxy(25,10);printf("|   5. Input Nilai US   |");
	gotoxy(25,11);printf("|   6. Kembali          |");
	gotoxy(25,12);printf("=========================");
		printf("\n\nPilih = ");scanf("%i", &pill);
	if(pill==1){
system("cls");
            	printf("===============================================================================\n	                      Penilaian Kelulusan\n	                         SDN MAGUNG I\n===============================================================================\n");
            	printf("\nInputlah nilai dengan memasukan no absen dan nilai akhir\nMaka Program akan otomatis menghitung di hasil\n\n");
    system("pause");
    system("cls");
    input();
        }
	else if(pill==2){
		                pilpat:

		printf("\nMasukan no Absen = ");scanf("%i", &sena);
		sena=sena-1;
		printf("\nMasukan nilai  = ");scanf("%i", &nina);
		if(sena>50){
                    printf("\nMaaf program ini hanya menampung maksimal 50 siswa");
                    nina=0;
                    }
		nilaia[sena]=nina;
		char pila;
        printf("\nApakah anda ingin menginput lagi? (y/t) : ");scanf("%s", &pila);
        switch(pila){
        	case 'y':
        	case 'Y':
        		goto pilpat;
        	case 't':
        	case 'T':
        		system("cls");
          		input();
	}
}
		else if(pill==3){
		                pilmb:
		printf("\nMasukan no Absen = ");scanf("%i", &senb);
		senb=senb-1;
		printf("\nMasukan nilai = ");scanf("%i", &ninb);
				if(senb>50){
                    printf("\nMaaf program ini hanya menampung maksimal 50 siswa");
                    ninb=0;
                    }
		nilaib[senb]=ninb;
		char pilb;
        printf("\nApakah anda ingin menginput lagi? (y/t) : ");scanf("%s", &pilb);
        switch(pilb){
        	case 'y':
        	case 'Y':
        		goto pilmb;
        	case 't':
        	case 'T':
        		system("cls");
          		input();
	}}
    	else if(pill==4){
		    pilmc:
		printf("\nMasukan no Absen = ");scanf("%i", &senc);
		senc=senc-1;
		printf("\nMasukan nilai = ");scanf("%i", &ninc);
				if(senc>50){
                    printf("\nMaaf program ini hanya menampung maksimal 50 siswa");
                    ninc=0;
                    }
		nilaic[senc]=ninc;
		char pilc;
        printf("\nApakah anda ingin menginput lagi? (y/t) : ");scanf("%s", &pilc);
        switch(pilc){
        	case 'y':
        	case 'Y':
        		goto pilmc;
        	case 't':
        	case 'T':
        		system("cls");
          		input();
	}
}	else if(pill==5){
		    pilus:
		printf("\nMasukan no Absen = ");scanf("%i", &senus);
		senus=senus-1;
		printf("\nMasukan nilai = ");scanf("%i", &ninus);
				if(senus>50){
                    printf("\nMaaf program ini hanya menampung maksimal 50 siswa");
                    ninc=0;
                    }
		nilaius[senus]=ninus;
		char pilus;
        printf("\nApakah anda ingin menginput lagi? (y/t) : ");scanf("%s", &pilus);
        switch(pilus){
        	case 'y':
        	case 'Y':
        		goto pilus;
        	case 't':
        	case 'T':
        		system("cls");
          		input();
        }}
  else if(pill=6){
       system("cls");
       main();}
	else{
		printf("\nMaaf pilihan anda salah!");
		getch();
		system("cls");
		main();
	}
}

void tampil(){
     system("cls");
                 	printf("===============================================================================\n	                      Penilaian Kelulusan\n	                         SDN MAGUNG I\n===============================================================================\n");
gotoxy(25, 4);printf("\nDaftar Nilai\n\n");
printf("----------------------------------------------------------------------------\n");
printf("|No. absen|Nilai kelas 4|Nilai kelas 5|Nilai kelas 6|Nilai US|Lulus/Tdk lls|\n");
printf("|---------|-------------|-------------|-------------|--------|-------------|\n");
    for (int a=0;a<50;a++){
gotoxy(0, a+10);printf("|");
gotoxy(4, a+10);printf("%i", a+1);
gotoxy(10, a+10);printf("|");
gotoxy(16, a+10);printf("%i", nilaia[a]);
gotoxy(24, a+10);printf("|");
gotoxy(29, a+10);printf("%i", nilaib[a]);
gotoxy(38, a+10);printf("|");
gotoxy(43, a+10);printf("%i", nilaic[a]);
gotoxy(52, a+10);printf("|");
gotoxy(57, a+10);printf("%i", nilaius[a]);
gotoxy(61, a+10);printf("|");

int na=((nilaia[a]+nilaib[a]+nilaic[a])*0.7)+(nilaius[a]*0.3);
if(na>=70){
           gotoxy(64,a+10);
           printf("Lulus");
           gotoxy(75, a+10);printf("|");
}
else{
     gotoxy(64,a+10);
     printf("Tdk Lulus");
     gotoxy(75, a+10);printf("|");
     }
}     
    printf("\n------------------------------------------------------\n");
    system("pause");
    system("cls");
    main();
}
