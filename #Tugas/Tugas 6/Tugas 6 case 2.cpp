#include <iostream>


using namespace std;

// Struktur data untuk menyimpan informasi pegawai
struct Pegawai {
    string nama;
    int jamKerja;
    int honorLembur;
    int totalHonor;
};

// Fungsi untuk menghitung honor lembur
int hitungHonorLembur(int jamKerja) {
    if (jamKerja > 8) {
        return (jamKerja - 8) * 5000;
    } else {
        return 0;
    }
}

// Fungsi untuk mengisi data pegawai
void isiDataPegawai(Pegawai &pegawai) {
    cout << "Nama Pegawai: ";
    cin.ignore();
    getline(cin, pegawai.nama);
    cout << "Jam Kerja: ";
    cin >> pegawai.jamKerja;
    pegawai.honorLembur = hitungHonorLembur(pegawai.jamKerja);
    pegawai.totalHonor = pegawai.honorLembur + 15000; // Honor harian
}

// Fungsi untuk menampilkan data pegawai
void tampilkanDataPegawai(const Pegawai &pegawai, int nomor) {
    cout << "| " << nomor << " | " << pegawai.nama << " | " << pegawai.jamKerja << " | "
         << pegawai.honorLembur << " | " << pegawai.totalHonor << " |" << endl;
}

int main() {
    int jumlahData;

    cout << "Masukkan jumlah data pegawai: ";
    cin >> jumlahData;

    // Array untuk menyimpan data pegawai
    Pegawai daftarPegawai[jumlahData];

    // Mengisi data pegawai
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Data Pegawai ke-" << i + 1 << endl;
        isiDataPegawai(daftarPegawai[i]);
    }

    // Menampilkan tabel
    cout << "+----+--------------+-----------+--------------+-------------+" << endl;
    cout << "| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |" << endl;
    cout << "+----+--------------+-----------+--------------+-------------+" << endl;
    for (int i = 0; i < jumlahData; ++i) {
        tampilkanDataPegawai(daftarPegawai[i], i + 1);
    }
    cout << "+----+--------------+-----------+--------------+-------------+" << endl;

    return 0;
}
