//Nama File         : jarakPBola.c
//Deskripsi         : Jarak p bola
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 22/02/2024

#include <stdio.h>

int main (){
    /*Kamus Lokal*/
    float v0, t, g, y;

    /*Algoritma*/
    printf("Masukan kecepatan awal (v0): ");
    scanf("%f", &v0);
    printf("Masukan tinggi (t): ");
    scanf("%f", &t);
    printf("Masukan gravitasi (g): ");
    scanf("%f", &g);

    printf("Diketahui: \nv0: %f\nt: %f\ng: %f\n", v0, t, g);

    printf("y = %f * %f - ((%f * %f * %f)/2)\n", v0, t, g, t, t);
    y = v0 * t - ((g * t * t)/2);
    printf("y = %f", y);

return 0;
}
