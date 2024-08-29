//Nama File         : volBolaKerct.c
//Deskripsi         : Volume bola kerucut
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 22/02/2024

#include <stdio.h>

int main(){
    /*Kamus Lokal*/
    float r, Vb, Vk;
    const float PHI = 3.14;

    /*Algoritma*/
    printf("Masukan jari-jari (r): ");
    scanf("%f", &r);

    printf("Volume Bola: 4/3 * (PHI * r^3)\nVOlume Bola: 4/3 * (%f * %f * %f * %f)\n", PHI, r, r, r);
    Vb = (4 * (PHI * r * r * r) / 3);

    printf("Volume Kerucut: Volume Bola / 2\nVolume Kerucut: %f /2\n", Vb);
    Vk = Vb / 2;

    printf("Volume Bola adalah: %f\n", Vb);
    printf("Volume Kerucut adalah: %f", Vk);

return 0;

}
