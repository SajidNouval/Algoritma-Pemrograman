//Nama File         : FrekNilTabel.c
//Deskripsi         : Menampilkan nilai yang frekuensi kemunculannya lebih dari 1 kali
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 14/03/2024

#include <stdio.h>
#include <stdlib.h>


int main () {
    /*Kamus Lokal*/
    int N, i, j, frekuensi;
    int T[100], a[100];

    /*Algoritma*/
    printf("Masukan nilai n: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        printf("T[%d] = ", i);
        scanf("%d",&T[i]);
        a[i] = 1;
    }
    for (i = 0; i < N; i++){
        frekuensi = 1;
        for (j = i + 1; j < N; j++){
            if (T[i] == T[j]){
                frekuensi++;
                a[j] = 0;
            }
        }
        if (a[i] != 0){
            a[i] = frekuensi;
        }
    }
    printf("Frekuensi yang muncul lebih dari satu kali: ");
    for (i = 0; i < N; i++){
        if (a[i] > 1){
            printf("%d ", T[i]);
        }

    }
    return 0;
}
