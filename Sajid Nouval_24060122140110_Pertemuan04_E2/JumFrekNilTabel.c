//Nama File         : JumFrekNilTabel.c
//Deskripsi         : Menampilkan nilai yang frekuensi kemunculannya lebih dari 1 kali dan dijumlah
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 14/03/2024

int main () {
    /*Kamus Lokal*/
    int N, i, j, frekuensi, jumlah = 0;
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
    for (i = 0; i < N; i++){
        if (a[i] > 1){
            jumlah = jumlah + (T[i]* a[i]);
        }
    }
    printf("%d ", jumlah);
    return 0;
}
