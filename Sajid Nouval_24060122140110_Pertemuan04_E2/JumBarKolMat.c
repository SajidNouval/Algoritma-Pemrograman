//Nama File         : JumBarKolMat.c
//Deskripsi         : jumlah abris Kolom...
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 14/03/2024

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus Lokal*/
    int N;
    int i;
    int j;
    int baris;
    int kolom;

    /*Algoritma*/
    printf("Masukkan jumlah elemen matriks: ");
    scanf("%d", &N);
    printf("Masukkan elemen matriks:\n");
    int T[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &T[i][j]);
        }
    }

    for(i=0;i<N;i++){
        baris=0;
        for(j=0;j<N;j++){
            baris += T[i][j];
        }
        printf("baris %d : %d\n",(i+1), baris);
    }
    for(j=0;j<N;j++){
        kolom=0;
        for(i=0;i<N;i++){
            kolom += T[i][j];
        }
        printf("kolom %d : %d\n",(j+1), kolom);
    }
    return 0;
}
