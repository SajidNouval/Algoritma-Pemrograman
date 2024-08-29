//Nama File         : CekBilPrima.c
//Deskripsi         : Mengecek bilangan prima
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 07/03/2024

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus Lokal*/
    int N, i, faktor = 0 ;

    /* Algoritma */
    printf("Masukan N = ");
    scanf("%d", &N);

    if (N>0){
        for (i = 1; i <=N ; i++){
            if (N % i == 0){
                faktor++;
            }
        }
    }
    if (N>0){
        if (faktor ==2){
            printf("N = %d adalah bilangan prima", N);
        }else{
            printf("N = %d adalah bukan bilangan prima", N);
            }
    }
    else {
        printf ("N harus bernilai positif");
    }
    return 0;
}

