#include <stdio.h>

int main() {
    int A, B, C;
    int babak = 1;

    printf("Masukkan angka yang dipilih Akagi: ");
    scanf("%d", &A);
    printf("Masukkan angka yang dipilih Kongou: ");
    scanf("%d", &B);

    // Permainan berlangsung selama tidak ada pemenang
    while (1) {
        C = A - B;
        printf("Babak %d\n", babak);
        printf("C = %d\n", C);
        printf("A = %d\n", A);
        printf("B = %d\n", B);

        // Pemenang adalah Akagi jika B negatif
        if (B < 0) {
            printf("Pemenangnya adalah Akagi\n");
            break;
        }

        // Pemenang adalah Kongou jika A negatif
        if (A < 0) {
            printf("Pemenangnya adalah Kongou\n");
            break;
        }

        // Pertukaran nilai antara rival
        if (C > 0) {
            A = B;
            B = C;
        } else {
            B = A;
            A = C;
        }

        // Input ulang angka
        printf("Masukkan angka yang dipilih Akagi: ");
        scanf("%d", &A);
        printf("Masukkan angka yang dipilih Kongou: ");
        scanf("%d", &B);

        babak++;
    }

    return 0;
}
