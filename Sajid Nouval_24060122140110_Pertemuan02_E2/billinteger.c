//Nama File         : billinteger.c
//Deskripsi         : membuat bil bulat, no, bil neg menggunakan if else
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 29/02/2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n;

    /*Algoritma*/
    printf("Masukan nilai: ");
    scanf("%d", &n);

    if (n > 0){
        printf("Bilangan bulat positif");
    }
    else{
        if (n < 0){
            printf("Bilangan bulat negative");
        }
        else{
            printf("Nol");
        }
    }
return 0;
}
