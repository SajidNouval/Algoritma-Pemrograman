//Nama File         : namaHari.c
//Deskripsi         : membuat hari menggunakan switch
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
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;
    default:
        printf("Masukan nomor hari tidak tepat");
    }
return 0;
}
