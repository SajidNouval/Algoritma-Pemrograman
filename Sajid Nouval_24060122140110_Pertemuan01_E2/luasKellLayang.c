//Nama File         : luasKellLayang.c
//Deskripsi         : Luas keliling layang
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 22/02/2024

#include <stdio.h>

int main() {
    /*Kamus Lokal*/
    float s1, s2, d1, d2, Luas, Kell;

    /*Algoritma*/
    printf("Masukan sisi 1 (s1): ");
    scanf("%f", &s1);
    printf("Masukan sisi 2 (s2): ");
    scanf("%f", &s2);
    printf("Masukan diagonal 1 (d1): ");
    scanf("%f", &d1);
    printf("Masukan diagonal 2 (d2): ");
    scanf("%f", &d2);

    printf("Diketahui:\ns1: %f\ns2: %f\nd1: %f\nd2: %f\n", s1, s2, d1, d2);

    printf("Luas = 1/2 * d1 * d2\nLuas = %f * %f / 2\n", d1, d2);
    Luas = (d1 * d2 / 2);
    printf("Keliling = 2 * (s1 + s2)\nKeliling = ((%f + %f) * 2)\n", s1, s2);
    Kell = ((s1 + s2) * 2);

    printf("Luas = %f\n", Luas);
    printf("Keiling = %f", Kell);

return 0;
}
