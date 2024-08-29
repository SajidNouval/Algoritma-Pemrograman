int main() {
    int n;

    // Input jumlah baris
    printf("Masukkan n: ");
    scanf("%d", &n);

    // Inisialisasi variabel untuk angka
    int num = 0;

    // Loop untuk setiap baris
    for (int i = 0; i < n; i++) {
        // Loop untuk setiap kolom dalam satu baris
        for (int j = 0; j <= i; j++) {
            // Print angka dan update nilai num
            printf("%d", num);
            num = (num + 1) % 10;
        }

        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}
