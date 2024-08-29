//Nama File         : JarakGLBB.c
//Deskripsi         : Jarak GLBB
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 22/02/2024

#include <stdio.h>

int main (){
    /*Kamus Lokal*/
    float v0, a, t, S;

    /*Algoritma*/
    printf("Masukan kecepatan awal v0: ");
    scanf("%f", &v0);
    printf("Masukan tinggi (t): ");
    scanf("%f", &t);
    printf("%Masukan alas (a): ");
    scanf("%f", &a);

    printf("Diketahui: \nv0: %f\nt: %f\na: %f\n", v0, t, a);

    printf("S = %f * %f + ((%f * %f * %f)/2)\n", v0, t, a, t, t);
    S = v0 * t + ((a*t*t)/2);
    printf("Hasilnya: %f", S);

return 0;
}
