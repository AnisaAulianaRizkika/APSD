#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
    // Variabel untuk menyimpan input nama dan nilai-nilai pertandingan
    string namaSiswa;
    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

    // Meminta input dari pengguna
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa: ";
    cin >> namaSiswa;
    cout << "Nilai Pertandingan I: ";
    cin >> nilaiPertandingan1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilaiPertandingan2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilaiPertandingan3;

    // Menghitung nilai rata-rata
    float nilaiRataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3.0;

    // Menentukan juara berdasarkan nilai rata-rata
    string juara;
    if (nilaiRataRata > 80) {
        juara = "Juara I";
    } else if (nilaiRataRata > 75) {
        juara = "Juara II";
    } else if (nilaiRataRata > 65) {
        juara = "Juara III";
    } else {
        juara = "Tidak Juara";
    }

    system("cls");

    // Menampilkan hasil
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dan menjadi juara " << juara << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}
