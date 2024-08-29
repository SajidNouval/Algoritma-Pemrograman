#include<stdio.h>

int main(){
    /*Kamus Lokal*/
    int A, B, C, TotA, TotB, PoinA, PoinB;

    /*Algoritma*/
    TotA = 0, TotB = 0;
    printf("Masukan Poin A: ")
    scanf("%d", &PoinA);
    printf("Masukan Poin B: ");
    scanf("%d", &PoinB);
    if (B>0){
        for (i=1; i<=N; i++){

        }
    }
}

#include <iostream>
using namespace std;

    int pointsA = 20000, pointsB = 20000;

    cout << "Masukkan angka yang dipilih Akagi: ";
    cin >> A;
    cout << "Masukkan angka yang dipilih Kongou: ";
    cin >> B;

    // Permainan berlangsung selama tidak ada pemenang
    while (true) {
        C = A - B;
        cout << "Babak: C = " << C << ", A = " << A << ", B = " << B << endl;

        // Pemenang adalah Akagi jika B negatif
        if (B < 0) {
            cout << "Pemenangnya adalah Akagi" << endl;
            break;
        }

        // Pemenang adalah Kongou jika A negatif
        if (A < 0) {
            cout << "Pemenangnya adalah Kongou" << endl;
            break;
        }

        // Pertukaran poin antara rival
        if (C > 0) {
            pointsA -= C;
            bloodB += C / 10;
        } else {
            pointsB += C;
            bloodA -= C / 10;
        }

        // Input ulang angka
        cout << "Masukkan angka yang dipilih Akagi: ";
        cin >> A;
        cout << "Masukkan angka yang dipilih Kongou: ";
        cin >> B;
    }

    return 0;
}
