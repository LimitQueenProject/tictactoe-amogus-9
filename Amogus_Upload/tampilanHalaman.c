#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>

#include "header.h"



void tampilanMenu()
{
    // 1. Bersihkan Layar
    system("cls");

    // 2. Tampilkan Banner 2
    banner2();
    
    // 3. PRINT Pilihan Menu
    koor(54,13); printf("%c%c%c%c%c%c%c%c",218, 196, 196, 196, 196, 196, 196, 191);        
    koor(54,14); printf("%c MENU %c",179, 179 );                                
    koor(54,15); printf("%c%c%c%c%c%c%c%c",192, 196, 196, 196, 196, 196, 196, 217);                
    koor(50,17); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);       
    koor(50,18); printf("%c   New Game   %c", 179, 179);
    koor(50,19); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 180);            
    koor(50,20); printf("%c  Load Game   %c", 179, 179);
    koor(50,21); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 180);            
    koor(50,22); printf("%c  Highscore   %c", 179, 179);
    koor(50,23); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 180);
    koor(50,24); printf("%c  How to Play %c", 179, 179);
    koor(50,25); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 180);
    koor(50,26); printf("%c   About Us   %c", 179, 179);
    koor(50,27); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 180);
    koor(50,28); printf("%c     Exit     %c", 179, 179);
    koor(50,29); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
    
}

void tampilanPlayer()
{
    // 1. Bersihkan Layar
    system("cls");

    // 2. Tampilkan Banner 2
    banner2();

    // 3. PRINT Pilihan Player
    koor(49,13);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(49,14);printf("%c               %c",179,179);
    koor(49,15);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    koor(47,17);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(47,18);printf("%c                   %c",179,179);
    koor(47,19);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
    koor(47,20);printf("%c                   %c",179,179);
    koor(47,21);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
    koor(47,22);printf("%c                   %c",179,179);
    koor(47,23);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    koor(51,14);
    printf("CHOOSE PLAYER");
    koor(53,18);
    printf("1 Player");
    koor(53,20);
    printf("2 Player");
    koor(55,22);
    printf("Back");
}

void tampilanBoard()
{
    // 1. Bersihkan Layar
    system("cls");

    // 2. Tampilkan Banner 2
    banner2();

    // 3. PRINT PILIHAN PAPAN
    koor(51,13); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(51,14); printf("%c           %c",179,179);
    koor(51,15); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,217);
    koor(47,17); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(47,18); printf("%c                   %c",179,179);
    koor(47,19); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
    koor(47,20); printf("%c                   %c",179,179);
    koor(47,21); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
    koor(47,22); printf("%c                   %c",179,179);
    koor(47,23); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
    koor(47,24); printf("%c                   %c",179,179);
    koor(47,25); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    koor(55,14); printf("BOARD");
    koor(56,18); printf("3x3");
    koor(56,20); printf("5x5");
    koor(56,22); printf("7x7");
    koor(55,24); printf("Back");
}

void tampilanHowToPlay()
{
    int button;
    // 1. Bersihkan Layar
    system("cls");

    // 2. Tampilkan Banner 2
    banner2();

    // 3. PRINT Tampilan Cara Bermain
    koor(49,12); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);            
    koor(49,13); printf("%c  How to Play  %c", 179, 179);
    koor(49,14); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);

    koor(27,16); printf("1. The game starts using board sizes, namely 3x3, 5x5, and 7x7");
    koor(27,18); printf("2. There are 2 players who can play, which can be against fellow players");
    koor(27,19); printf("   or against the computer");
    koor(27,21); printf("3. Player 1 uses the X mark and player 2 uses the O mark");
    koor(27,23); printf("4. Choose a box to be filled in by the player, provided that");
    koor(27,24); printf("   the player cannot choose a box that has already been selected");
    koor(27,26); printf("5. The first player to succeed in making a line with his mark");
    koor(27,27); printf("   be it horizontal, vertical or diagonal then declared the winner");
    koor(27,29); printf("6. If none of the players succeed in making a line, then the ");
    koor(27,30); printf("   game is considered a draw");
    
    koor(2,33);  printf("press any key to back...");
	button = getch();
}

void tampilanAboutUs()
{
    int button;
    // 1. Bersihkan Layar
    system("cls");

    // 2. Tampilkan Banner 2
    banner2();

    // 3. PRINT Tampilan Tentang Kami
    koor(50,12); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    koor(50,13); printf("%c   About Us   %c", 179, 179);
    koor(50,14); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);

    koor(44,16); printf("1. Farhan Muhammad yasin");
    koor(47,17); printf("NIM = 221524008");
    koor(47,18); printf("Instagram = @f._.myers");
    koor(44,20); printf("2. Muhammad Azharuddin Hamid");
    koor(47,21); printf("NIM = 221524018");
    koor(47,22); printf("Instagram = @muhammadazhar9_");
    koor(44,24); printf("3. Roy Aziz Barera");
    koor(47,25); printf("NIM = 221524030");
    koor(47,26); printf("Instagram = @royazizbarera_");
    koor(39,29); printf("Institusi = Polikteknik Negeri Bandung");
    
    koor(2,33);  printf("press any key to back...");
	button = getch();
}

void tampilanPilihPertama ()
{
    // 1. Bersihkan Layar
    system("cls");

    // 2. Tampilkan Banner 2
    banner2();

    // 3. PRINT Tampilan Siapa yang Bermain Pertama    
    koor(48,12); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(48,13); printf("%c Who goes first ? %c",179,179);
    koor(48,14); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    
    koor(50,16); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(50,17); printf("%c              %c",179,179);
    koor(50,18); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
    koor(50,19); printf("%c              %c",179,179);
    koor(50,20); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    koor(54,17); printf("Player 1");
    koor(54,19); printf("Player 2");
}

void tampilSetelahBermain()
{
	koor(94,7);  printf("Play Again");
	koor(94,9);  printf("Choose Board");
	koor(94,11); printf("Save");
	koor(94,13); printf("Back to Menu");
	koor(94,15); printf("Swap Turn");
}


void tampilWinorDraw(char _namaPlayer1[100], char _namaPlayer2[100], int _pemenang, int _giliran, int _jenisPapan)
{
    //kondisi menang
    if (_pemenang == 1 || _pemenang == 2){
        koor(10,11); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201, 205, 187, 201, 205, 187, 201, 187, 201, 201, 205, 187, 203, 205, 187, 201, 205, 187, 201, 203, 187, 201, 205, 187);
        koor(10,12); printf("%c  %c %c%c%c%c%c %c%c%c%c%c%c%c %c %c%c%c", 186, 186, 186, 186, 186, 186, 186, 203, 204, 203, 188, 204, 205, 185, 186, 200, 205, 187);
        koor(10,13); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c %c %c%c%c",  200, 205, 188, 200, 205, 188, 200, 200, 188, 200, 205, 188, 202, 200, 205, 202, 202, 202, 200, 205, 188);
        //kondisi jika player 1 menang
        if (_pemenang == 1){
            koor(20,15); printf("%s !!!", _namaPlayer1);
        //kondisi jika player 2 menang
        }else if (_pemenang == 2){
            koor(20,15); printf("%s !!!", _namaPlayer2);
        }
    }
    //kondisi draw atau seri
    else {
        koor(15,11); printf("%c%c%c%c%c%c%c%c%c%c %c", 201, 203, 187, 203, 205, 187, 201, 205, 187, 203, 203);
        koor(15,12); printf(" %c%c%c%c%c%c%c%c%c%c%c", 186, 186, 204, 203, 188, 204, 205, 185, 186, 186, 186);
        koor(15,13); printf("%c%c%c%c%c%c%c %c%c%c%c", 205, 202, 188, 202, 200, 205, 202, 202, 200, 202, 188);
        koor(15,15); printf("%s VS %s", _namaPlayer1, _namaPlayer2);
        }
}


void inputNama( int _jenisPermainanPlayer, char (*_namaPlayer1)[20], char (*_namaPlayer2)[20])
{
    int valid = 0;
    // Nama Player
    if ( _jenisPermainanPlayer == 1 )
    {
        do{
            // Bersihkan Layar
            system("cls");

            // Tampilkan Banner 2
            banner2();

            koor(45,17); printf("Masukan nama anda : ");
            scanNama(&*_namaPlayer1);
            if ( strlen(*_namaPlayer1) <= 20 ){
                valid = 1;
            }
            else{
                koor(43,19); printf("Nama anda terlalu panjang silahkan input ulang");
                sleep(1);
            }
        }while(valid == 0);
        strcpy(*_namaPlayer2, "Computer");
    }
    else if ( _jenisPermainanPlayer == 2 )
    {
        do{
            // Bersihkan Layar
            system("cls");

            // Tampilkan Banner 2
            banner2();

            koor(45,17); printf("Masukan nama player 1 : ");
            scanNama(&*_namaPlayer1);
            if ( strlen(*_namaPlayer1) <= 20 ){
                valid = 1;
            }
            else{
                koor(43,19); printf("Nama anda terlalu panjang silahkan input ulang\n");
                sleep(1);
            }
        }while(valid == 0);
        valid = 0;
        
        do{
            // Bersihkan Layar
            system("cls");

            // Tampilkan Banner 2
            banner2();

            koor(45,17); printf("Masukan nama player 2 : ");
            scanNama(&*_namaPlayer2);
            if ( strlen(*_namaPlayer2) <= 20 ){
                valid = 1;
            }
            else{
                koor(43,17); printf("Nama anda terlalu panjang silahkan input ulang\n");
                sleep(1);
            }
        }while(valid == 0);
    }
}

void tampilHighScore(char _namaPlayer[20], int _score, int _urutanData, int _akhirData)
{
    // Menampilkan banner 2
    banner2();

    // Menampilkan papan highscore
    koor(47,13); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    koor(47,14); printf("%c Top 10 Highest Point %c", 179, 179);
    koor(47,15); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

    int pany = 17;

    if(_urutanData == 0 || _urutanData == _akhirData)
    {
        koor(37,pany);   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,194,196,196,196,191);
        koor(37,pany+1); printf("%c %s",179,_namaPlayer);
        koor(76,pany+1); printf("%c %d %c",179,_score,179);
        koor(37,pany+2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    }
    
    else 
    {
        pany = pany + _urutanData * 2;
        koor(37,pany);   printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,197,196,196,196,180);
        koor(37,pany+1); printf("%c %s",179,_namaPlayer);
        koor(76,pany+1); printf("%c %d %c",179,_score,179);
        koor(37,pany+2); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,193,196,196,196,217);
    }

    koor(10,32); printf("press any key to continue");
}