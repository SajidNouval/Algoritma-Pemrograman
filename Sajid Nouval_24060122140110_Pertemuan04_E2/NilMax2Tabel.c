//Nama File         : NilMax2Tabel.c
//Deskripsi         : Menampilkan nilai max ke 2
//Pembuat           : Sajid Nouval - 24060122140110
//Tanggal Pembuatan : 14/03/2024

int main (){
    /*Kamus Lokal*/
    int n, i, m1, m2;

    /*Algoritma*/
    printf("Masukan nilai Max 1: \n");
    scanf("%d",&n);
    int T[n];
    m1 = 0;
    m2 = 0;
    printf("Masukan nilai Max 2: \n");
    for (i=0;i<n;i++){
        scanf("%d", &T[i]);
        }
        for(i=0;i<n;i++){
            if(T[i]>m1){
                m2=m1;
                m1=T[i];
            }
            else if (T[i]>m2 && T[i] != m1){
            m2=T[i];
        }
    }
    printf("Nilai maksimum kedua adalah : %d\n", m2);
}
