#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

float HitungNilaiAkhir (float NilaiKeaktifan, float NilaiTugas, float NilaiUjian) {
    float NilaiMurniKeaktifan = NilaiKeaktifan * 0.20;
    float NilaiMurniTugas = NilaiTugas * 0.30;
    float NilaiMurniUjian = NilaiUjian * 0.50;

    return NilaiMurniKeaktifan + NilaiMurniTugas + NilaiMurniUjian;
}

int main(){
    string NamaSiswa;
    float NilaiKeaktifan,NilaiTugas,NilaiUjian;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa :";
    cin >> NamaSiswa;
    cout << "Nilai Keaktifan :";
    cin >> NilaiKeaktifan;
    cout << "Nilai Tugas :";
    cin >> NilaiTugas;
    cout << "Nilai Ujian :";
    cin >> NilaiUjian;

    float NilaiAkhir = HitungNilaiAkhir(NilaiKeaktifan, NilaiTugas, NilaiUjian);

    string Grade;
    if (NilaiAkhir > 80) {
        Grade = "A";
    } else if (NilaiAkhir > 70) {
        Grade = "B";
    } else if (NilaiAkhir > 56) {
        Grade = "C";
    } else if (NilaiAkhir > 46) {
        Grade = "D";
    } else {
        Grade = "E";
    }

    system ("cls");
    cout << "Siswa yang bernama " << NamaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20%: " << NilaiKeaktifan * 0.20 << endl;
    cout << "Nilai Tugas * 30%: " << NilaiTugas * 0.50 << endl;
    cout << "Nilai Ujian * 50%: " << NilaiUjian * 0.30 << endl;
    cout << "Jadi Siswa yang bernama " << NamaSiswa << " memperoleh nilai akhir sebesar " << NilaiAkhir << endl;
    cout << "Grade: " << Grade << endl;
    return 0;


}
