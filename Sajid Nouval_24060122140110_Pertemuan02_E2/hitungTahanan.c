//Nama File         : hitungTahanan.c
//Deskripsi         : Menghitung tahanan
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 29/02/2024

#include <stdio.h>

int main(){
    /*Kamus Lokal*/
    int a, b, c, Total;

    /*Algoritma*/
    printf("Masukan nilai tahanan 1: ");
    scanf("%d", &a);
    printf("Masukan nilai tahanan 1: ");
    scanf("%d", &b);
    printf("Masukan nilai tahanan 1: ");
    scanf("%d", &c);

    Total = a + b + c;
    if (a >= 0 & b >= 0 & c >= 0){
        printf("nilai ketiga tahanan tersebut %d", Total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }

return 0;
}
