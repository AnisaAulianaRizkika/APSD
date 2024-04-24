#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung gaji
void hitungGaji(string nama, int golongan, string pendidikan, int jam_kerja) {
    // Gaji pokok
    int gaji_pokok = 300000;

    // Hitung tunjangan jabatan
    double tunjangan_jabatan;
    if (golongan == 1) {
        tunjangan_jabatan = 0.05 * gaji_pokok;
    } else if (golongan == 2) {
        tunjangan_jabatan = 0.1 * gaji_pokok;
    } else if (golongan == 3) {
        tunjangan_jabatan = 0.15 * gaji_pokok;
    } else {
        tunjangan_jabatan = 0;
    }

    // Hitung tunjangan pendidikan
    double tunjangan_pendidikan;
    if (pendidikan == "SMA") {
        tunjangan_pendidikan = 0.025 * gaji_pokok;
    } else if (pendidikan == "D1") {
        tunjangan_pendidikan = 0.05 * gaji_pokok;
    } else if (pendidikan == "D3") {
        tunjangan_pendidikan = 0.2 * gaji_pokok;
    } else if (pendidikan == "S1") {
        tunjangan_pendidikan = 0.3 * gaji_pokok;
    } else {
        tunjangan_pendidikan = 0;
    }

    // Hitung honor lembur
    int lembur;
    if (jam_kerja > 8) {
        lembur = (jam_kerja - 8) * 3500;
    } else {
        lembur = 0;
    }

    // Total gaji
    double total_gaji = gaji_pokok + tunjangan_jabatan + tunjangan_pendidikan + lembur;

    // Tampilkan hasil
    cout << "Karyawan dengan nama " << nama << endl;
    cout << "Tunjangan Jabatan Rp " << tunjangan_jabatan << endl;
    cout << "Tunjangan Pendidikan Rp " << tunjangan_pendidikan << endl;
    cout << "Honor Lembur Rp " << lembur << endl;
    cout << "Total Gaji Rp " << total_gaji << endl;
}

int main() {
    // Input data karyawan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    string nama, pendidikan;
    int golongan, jam_kerja;
    cout << "Nama Karyawan : ";
    getline(cin, nama);
    cout << "Golongan Jabatan (1/2/3) : ";
    cin >> golongan;
    cin.ignore(); // Membersihkan buffer
    cout << "Pendidikan (SMA/D1/D3/S1) : ";
    getline(cin, pendidikan);
    cout << "Jumlah jam kerja : ";
    cin >> jam_kerja;

    // Hitung dan tampilkan gaji
    hitungGaji(nama, golongan, pendidikan, jam_kerja);

    return 0;
}
