//Nama File         : BilPrima.c
//Deskripsi         : Mengecek bilangan prima
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 07/03/2024

#include <stdlib.h>
#include <stdio.h>

int main() {
    int N, faktor = 0;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &N);

    if (N > 0){
        printf("Bilangan primanya adalah : ", N);
        for (int i = 1; i <= N; i++) {
            faktor = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    faktor++;
                }
            }
            if (faktor == 2) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf ("N harus bernilai positif");
    }
    return 0;
}
