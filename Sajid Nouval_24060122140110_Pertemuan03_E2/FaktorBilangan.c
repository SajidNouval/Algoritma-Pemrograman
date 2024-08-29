//Nama File         : FaktorBilangan.c
//Deskripsi         : Mencari faktor bilangan
//Pembuat           : Sajid Nouval
//Tanggal Pembuatan : 07/03/2024

int main() {
    /*Kamus Lokal*/
    int N,i;

    /*Algoritma*/
    printf ("Masukan N: ");
    scanf("%d",&N);

    if (N>0) {
        printf ("N = %d, faktor bilangannya adalah :", N);
        for (i=1; i<=N; i++) {
            if(N%i ==0) {
                printf(" %d",i);
            }
        }
    }
    else {
        printf ("N harus bernilai positif");
    }
return 0;
}
