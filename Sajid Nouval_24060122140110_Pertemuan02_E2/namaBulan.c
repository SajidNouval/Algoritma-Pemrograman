//Nama File         : namaBulan.c
//Deskripsi         : membuat bulan menggunakan switch
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

    switch(n){
    case 1:
        printf("januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
    }
return 0;
}
