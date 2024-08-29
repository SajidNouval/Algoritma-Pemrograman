//Nama File         : Jumlahderet.c
//Deskripsi         : Menghitung jumlah deret
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 07/03/2024

#include <stdio.h>

int main() {
    /*Kamus Lokal*/
    int N, jumlah;

    /*Algoritma*/
    jumlah=0;
    scanf ("%d", &N);
    printf ("Jumlah deret bilangan dari 1 sampai %d : ", N);
    if(N>0){
        for(int i=1; i<= N; i++){
            jumlah +=i;
        }
    printf("%d",jumlah);
    } else {
        printf("N tidak boleh negatif");
    }
return 0;
}
