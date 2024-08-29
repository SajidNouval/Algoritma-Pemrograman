//Nama File         : CekBilSemp.c
//Deskripsi         : Mengecek bilangan sempurna
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 07/03/2024

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus Lokal*/
    int N, i, faktor;

    /*Algoritma*/
    faktor = 0;
    printf("Masukan N: ");
    scanf("%d", &N);
    if (N>0){
        for (i = 1; i < N ; i++){
            if (N % i == 0){
                faktor += i;
            }
        }
    }
    if (N>0){
        if (faktor == N){
            printf("N = %d adalah bilangan sempurna", N);
        }else{
            printf("N = %d adalah bukan bilangan sempurna", N);
        }
    }
    else {
        printf ("N harus bernilai positif");
    }
    return 0;
}
