//Nama File         : cekSegitiga.c
//Deskripsi         : cek sisi segitiga
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 29/02/2024

#include <stdio.h>

int main () {
    int  a,b,c;
    printf ("Masukan nilai sisi a: ");
    scanf ("%d", &a);
    printf ("Masukan nilai sisi b: ");
    scanf ("%d", &b);
    printf ("Masukan nilai sisi c: ");
    scanf ("%d", &c);

    if (a<=0 || b<=0 || c<=0) {
        printf ("Terdapat nilai yang bukan sisi segitiga");
    }
    else if ((a+b)<=c) {
        printf ("Tidak dapat membentuk segitiga");
    }
    else if (a==b && a==c && b==c) {
        printf ("Segitiga Sama Sisi");
    }
    else if (a==b || b==c || a==c) {
        printf ("Segitiga Sama Kaki");
    }
    else {
        printf ("Segitiga Sembarang");
    }

return 0;
}
