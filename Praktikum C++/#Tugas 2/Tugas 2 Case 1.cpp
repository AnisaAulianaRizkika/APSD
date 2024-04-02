#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
float hitungRataRata(float tugas1, float tugas2, float tugas3) {
    return (tugas1 + tugas2 + tugas3) / 3;
}

int main() {
    string nim, nama;
    float nilaiTugas1, nilaiTugas2, nilaiTugas3;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nim Siswa       : ";
    cin >> nim;
    cout << "Nama Siswa      : ";
    getline(cin, nama);
    cout << "Nilai Tugas I   : ";
    cin >> nilaiTugas1;
    cout << "Nilai Tugas II  : ";
    cin >> nilaiTugas2;
    cout << "Nilai Tugas III : ";
    cin >> nilaiTugas3;

    float rataRata = hitungRataRata(nilaiTugas1, nilaiTugas2, nilaiTugas3);

    system("cls");

    cout << "Nim " << nim << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil tugas yang diikutinya." << endl;


    getch();

    return 0;
}

