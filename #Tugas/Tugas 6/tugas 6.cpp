#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa {
	int no;
	string nama;
	float nilaiUTS;
	float nilaiUAS;
	float nilaiAkhir;
	char nilaiHuruf;
};

int main() {
	int banyakData;

	// Input banyak data
	cout << " Masukan banyak data mahasiswa: ";
	cin >> banyakData;

	// Vektor untuk menyimpan data mahasiswa
	vector < Mahasiswa > dataMahasiswa(banyakData);

		//input data mahasiswa
	for (int i = 0; i < banyakData; ++i) {
		cout << " Data mahasiswa ke- " << i + 1 << endl;
		dataMahasiswa[i].no = i + 1;
		cout << " Nama Mahasiswa: ";
		cin.ignore(); // Mengabaikan newline character dari input sevelumnya;
		getline(cin, dataMahasiswa[i].nama);
		cout << " Nilai UTS: ";
		cin >> dataMahasiswa[i].nilaiUTS;
		cout << " Nilai UAS: ";
		cin >> dataMahasiswa[i].nilaiUAS;
		cout << endl;

		// Perhitungan nilai akhir dan nilai huruf
		dataMahasiswa[i].nilaiAkhir = (dataMahasiswa[i].nilaiUAS * 0.4 + (dataMahasiswa[i].nilaiUTS * 0.6));
		if (dataMahasiswa[i].nilaiAkhir >= 80) {
			dataMahasiswa[i].nilaiHuruf = 'A' ;
		}
		else if (dataMahasiswa[i].nilaiAkhir >= 70) {
			dataMahasiswa[i].nilaiHuruf = 'B';
		}
		else if (dataMahasiswa[i].nilaiAkhir >= 56) {
			dataMahasiswa[i].nilaiHuruf = 'C';
		}
		else if (dataMahasiswa[i].nilaiAkhir >= 47) {
			dataMahasiswa[i].nilaiHuruf = 'D';
		}
		else if (dataMahasiswa[i].nilaiAkhir < 47) {
			dataMahasiswa[i].nilaiHuruf = 'E';
		}
		// Tampilkan tabel data mahasiswa
		cout << "\nTabel Nilai Mahasiswa; \n ";
		cout << setw(4) << " No "
			<< setw(20) << " Nama Mahasiswa "
			<< setw(10) << " Nilai UTS "
			<< setw(10) << " Nilai UAS "
			<< setw(12) << " Nilai Akhir "
			<< setw(12) << " Nilai Huruf "
			<< endl;
		for (int i = 0; i < banyakData; i++) {
			cout << setw(4) << dataMahasiswa[i].no
				<< setw(20) << dataMahasiswa[i].nama
				<< setw(10) << dataMahasiswa[i].nilaiUTS
				<< setw(10) << dataMahasiswa[i].nilaiUAS
				<< setw(12) << fixed << setprecision(i) << dataMahasiswa[i].nilaiAkhir
				<< setw(12) << dataMahasiswa[i].nilaiHuruf
				<< endl;

		}
	}
	return 0;
}
