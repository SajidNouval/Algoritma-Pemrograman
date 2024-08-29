//Nama File         : Segitiga.c
//Deskripsi         : segitiga
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 22/02/2024

#include <stdio.h>

int main() {
    //Kamus Lokal
    float t, a, Luas;

    //Algoritma
    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    printf("Masukkan nilai a : ");
    scanf("%f", &a);

    printf("Diketahui : \n");
    printf("t = %f\n", t);
    printf("a = %f\n", a);
    printf("L = a*t/2\n");
    printf("Luas = (%f*%f/2)\n", a, t);

    Luas = a*t/2;
    printf("Luas = %f", Luas);

    return 0;
}
