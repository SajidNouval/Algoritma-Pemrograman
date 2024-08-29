//Nama File         : Kalkulator.c
//Deskripsi         : membuat kalkulator
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 29/02/2024

#include <stdio.h>

int  main () {
    int iA,iB;
    char i;
    float res;
    scanf ("%d", &iA);
    scanf("%d", &iB);
    scanf ("%d", &iB);
    scanf ("%c", &i);

    switch (i) {
    case 'a':
        printf ("Hasil operasi %c: %d", i, iA+iB);
        break;
    case 'b':
        printf ("Hasil operasi %c: %d", i, iA-iB);
        break;
    case 'c':
        printf ("Hasil operasi %c: %d", i, iA*iB);
        break;
    case 'd':
        res = (float) iA / (float) iB;
        printf("Hasil operasi %c: %f", i, res);
        break;
    case 'e':
        printf ("Hasil operasi %c: %d", i, iA/iB);
        break;
    case 'f':
        printf ("Hasil operasi %c: %d", i, iA%iB);
        break;
    default:
        printf ("Bukan pilihan menu yang benar");

    }
}
