//Nama File         : BilSemp.c
//Deskripsi         : Mengecek bilangan sempurna
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 07/03/2024

#include <stdlib.h>
#include <stdio.h>

int main() {
    /*Kamus Lokal*/
    int N, faktor, sum;

    /*Algoritma*/
    faktor = 0;
    sum = 0;
    printf("Masukan bilangan bulat positif: ");
    scanf("%d", &N);

    printf("Bilangan sempurnanya adalah : ");
    if (N>0) {
        for (int i = 1; i <= N; i++) {
            faktor = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    faktor++;
                    sum += j;
                }
            }
            if (sum == i) {
                printf("%d ", i);
            }
            sum = 0;
        }
        }
    else {
        printf ("N harus bernilai positif");
    }
    return 0;
}
