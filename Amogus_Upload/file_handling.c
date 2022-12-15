#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "header.h"

void highScore()
{   
    // DEKLARASI
    typedef struct{
        char namaPlayer[20];
        int score;
    }DATA;

    FILE *file1;
    DATA data[10000];
    DATA tempData;
    Game tempGame;

    // 1. CEK JUMLAH DATA YANG TERSIMPAN
    file1 = fopen("data.dat","rb");
    if (file1 == NULL){
        system("cls");
        printf("\n\tData is empty");
        printf("\n\tPress any button to back");
        fclose(file1);
        int butt = getch();
    }else{
        // 2. SALIN NAMA DAN SCORE DARI TIAP TIAP PEMAIN
        int i = 0;
        while (fread(&tempGame, sizeof(Game), 1, file1))
        {
            strcpy(data[i].namaPlayer, tempGame.pemain1.namaPlayer);
            data[i].score = tempGame.pemain1.score;
            strcpy(data[i+1].namaPlayer, tempGame.pemain2.namaPlayer);
            data[i+1].score = tempGame.pemain2.score;
            i+=2;
        }
        fclose(file1);

        // URUTKAN DATA DARI YANG PALING BESAR KE TERKECIL
        for ( int j = 0; j < i; j++ )
        {
            for ( int k = 0; k < i-1; k++ )
            {
                if( data[k].score < data[k+1].score )
                {
                    tempData = data[k];
                    data[k] = data[k+1];
                    data[k+1] = tempData;
                }
            }
        }
        
        
        if(i>5)
        {
            i=5;
        }

        system("cls");
        for (int j = 0; j < i; j++)
        {
            tampilHighScore(data[j].namaPlayer, data[j].score, j, i);
        }
        int p = getch();    
    }
}


void tampilkanData()
{
    int max_id;
    FILE *file;
    Game _game;

    file = fopen("data.dat", "rb");
    system("cls");
    banner2();
    koor(3,12);
    while (fread(&_game, sizeof(Game), 1, file))
    {
        printf("\n\tID Game : %d\n", _game.id_game);
        printf("\t%s VS %s\n", _game.pemain1.namaPlayer, _game.pemain2.namaPlayer);
        printf("\tScore %s\t: %d\n", _game.pemain1.namaPlayer, _game.pemain1.score);
        printf("\tScore %s\t: %d\n", _game.pemain2.namaPlayer, _game.pemain2.score);
        printf("\tBoard Type : %dx%d\n", _game.papan.jenisPapan, _game.papan.jenisPapan);
        if (_game.pilihPertama == 1)
            printf("\t%s is go first\n", _game.pemain1.namaPlayer);
        else
            printf("\t%s is go first\n", _game.pemain2.namaPlayer);
    }

    fclose(file);
}

void loadGame(Game *game, bool *_kondisiLoadgame)
{
    int _id;

    FILE *file1;
    Game tempGame;

    bool kondisiDitemukan = false;
    bool kondisiCariLagi = false;

    do{
        file1 = fopen("data.dat","rb");

        if ( file1 == NULL )
        {
            system("cls");
            printf("\n\tData is empty");
            printf("\n\tPress any button to back");
            int butt = getch();
        }
        else{
            tampilkanData();

            banner2();
            koor(3,11);
            printf("\tInput ID game : ");
            scanf("%d", &_id);
            koor(2,13);
            while(fread(&tempGame, sizeof(Game),1,file1))
            {
                if ( tempGame.id_game == _id )
                {
                    system("cls");
                    banner2();
                    printf("\n\n\n\tSucces to found the data\n");
                    printf("\tID Game : %d\n", tempGame.id_game);
                    printf("\t%s VS %s\n", tempGame.pemain1.namaPlayer, tempGame.pemain2.namaPlayer);
                    printf("\tScore %s\t: %d\n", tempGame.pemain1.namaPlayer, tempGame.pemain1.score);
                    printf("\tScore %s\t: %d\n", tempGame.pemain2.namaPlayer, tempGame.pemain2.score);
                    printf("\tBoard Type : %dx%d\n", tempGame.papan.jenisPapan, tempGame.papan.jenisPapan);
                    if (tempGame.pilihPertama == 1){
                        printf("\t%s is go first\n", tempGame.pemain1.namaPlayer);
                    }
                    else{
                        printf("\t%s is go first\n", tempGame.pemain2.namaPlayer);
                    }
                    printf("\n\n\tLoad game ?\n\tPress Enter to load");
                    int b = getch();
                    if (b==13)
                    {
                        *_kondisiLoadgame = true;
                        *game = tempGame;
                    }
                    kondisiDitemukan = true;
                }
            }
            if( kondisiDitemukan == true ){
                kondisiCariLagi = false;
            }
            else if( kondisiDitemukan == false ){
                system("cls");
                banner2();
                printf("\n\n\tData is empty");
                printf("\n\tPress Enter to search another id...");
                int b = getch();
                if( b == 13 ){ 
                    kondisiCariLagi = true;
                }else kondisiCariLagi = false;
            }
        }
        fclose(file1);
    }while(kondisiCariLagi == true);

}

void saveData(Game _game)
{
    FILE *file1, *file2;
    Game tempGame;
    int id = _game.id_game;

    // BUKA FILE DATA.DAT MODE REWIND
    file1 = fopen("data.dat", "ab");
    // TAMBAHKAN DATA TERBARU KE BARIS PALING BAWAH
    fwrite(&_game, sizeof(Game), 1, file1);
    // TUTUP FILE1
    fclose(file1);

    // BUKA DILE DATA.DAT MODE READ
    file1 = fopen("data.dat", "rb");
    // BUKA DILE TEMPDATA.DAT MODE REWIND
    file2 = fopen("tempData.dat", "ab");

    // BACA DAN MASUKAN DATA YANG ADA PADA FILE SATU PERSATU KECUALI ID YANG AKAN DI SAVE PADA FILE DATA.DAT
    while (fread(&tempGame, sizeof(Game), 1, file1))
    {
        if (tempGame.id_game != id)
        {
            // MASUKAN DATA KECUALI DATA YANG SAMA DENGAN ID GAME YANG AKAN DISIMPAN
            fwrite(&tempGame, sizeof(Game), 1, file2);
        }
    }
    // SIMPAN DATA TERBARU KE BARIS PALING BAWAH PADA TEMPDATA.DAT
    fwrite(&_game, sizeof(Game), 1, file2);
    koor(55,28);
    printf("\n\tYour data has been saved\n");
    sleep(2);
    koor(55,28);
    printf("\n\t                         \n");
    // TUTUP FILE DATA.DAT DAN TEMPDATA.DAT
    fclose(file1);
    fclose(file2);
    // HAPUS DATA.DAT
    remove("data.dat");
    // UBAH NAMA TEMPDATA.DAT MENJADI DATA.DAT
    rename("tempData.dat", "data.dat");
}