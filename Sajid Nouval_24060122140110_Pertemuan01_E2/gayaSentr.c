//Nama File         : gayaSentr.c
//Deskripsi         : gaya sentr
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 22/02/2024


#include <stdio.h>

int main() {
    /*Kamus Lokal*/
    float m, v, r, F;

    /*Algoritma*/
    printf("Masukan massa (m): ");
    scanf("%f", &m);
    printf("Masukan kecepatan (v): ");
    scanf("%f", &v);
    printf("Masukan jari-jari (r): ");
    scanf("%f", &r);

    printf("Diketahui:\nm: %f\nv: %f\nr: %f\n", m, v, r);

    printf("F = %f (%f * %f / %f)\n", m, v, v, r);
    F = m * (v * v / r);
    printf("F = %f", F);

return 0;
}
