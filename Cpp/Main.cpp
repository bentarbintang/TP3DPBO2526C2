#include <iostream>
#include <vector>
#include <string>
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "PetugasKebersihan.cpp"
using namespace std;

string inputTeks(const string &label) {
    string s;
    cout << label << ": ";
    getline(cin, s);
    return s;
}

double inputDesimal(const string &label) {
    while (true) {
        try { return stod(inputTeks(label)); }
        catch (...) { cout << "  Input harus angka, coba lagi.\n"; }
    }
}

int inputInteger(const string &label) {
    while (true) {
        try { return stoi(inputTeks(label)); }
        catch (...) { cout << "  Input harus bilangan bulat, coba lagi.\n"; }
    }
}

KartuAkses inputKartu() {
    string id = inputTeks("ID Kartu");
    string level = inputTeks("Level Akses");
    return KartuAkses(id, level);
}


void tambahMahasiswa(vector<Mahasiswa> &daftar) {
    cout << "\n--- Tambah Mahasiswa ---\n";
    string id = inputTeks("ID Entitas");
    string nama = inputTeks("Nama");
    string prodi = inputTeks("Prodi");
    string nim = inputTeks("NIM");
    double ipk = inputDesimal("IPK");
    Mahasiswa m(id, nama, prodi, nim, ipk);
    m.setKartu(inputKartu());
    daftar.push_back(m);
    cout << "Data mahasiswa berhasil ditambahkan.\n";
}

void tambahDosen(vector<Dosen> &daftar) {
    cout << "\n--- Tambah Dosen ---\n";
    string id = inputTeks("ID Entitas");
    string nama = inputTeks("Nama");
    string prodi = inputTeks("Prodi");
    Dosen d(id, nama, prodi);
    d.setNidn(inputTeks("NIDN"));
    d.setMataKuliah(inputInteger("Jumlah Mata Kuliah"));
    d.setKartu(inputKartu());
    daftar.push_back(d);
    cout << "Data dosen berhasil ditambahkan.\n";
}

void tambahPetugas(vector<PetugasKebersihan> &daftar) {
    cout << "\n--- Tambah Petugas Kebersihan ---\n";
    string id = inputTeks("ID Entitas");
    string nama = inputTeks("Nama");
    string prodi = inputTeks("Prodi/Unit");
    string idPetugas = inputTeks("ID Petugas");
    string shift = inputTeks("Shift Kerja");
    PetugasKebersihan p(id, nama, prodi, idPetugas, shift);
    p.setKartu(inputKartu());
    daftar.push_back(p);
    cout << "Data petugas berhasil ditambahkan.\n";
}

void tampilkanKartu(EntitasKampus &e) {
    cout << "   ID Kartu     : " << e.getKartu().getIdKartu() << endl;
    cout << "   Level Akses  : " << e.getKartu().getLevelAkses() << endl;
    cout << "\n";
}

void tampilkanMahas(vector<Mahasiswa> &mhs, vector<Dosen> &dsn, vector<PetugasKebersihan> &ptg) {
    cout << "=== Daftar Mahasiswa (" << mhs.size() << ") ===\n";
    for (size_t i = 0; i < mhs.size(); i++) {
        cout << i + 1 << "."; 
        cout << " ID Entitas   : " << mhs[i].getIdEntitas() << endl;
        cout << "   Nama         : " << mhs[i].getNama() << endl;
        cout << "   Prodi        : " << mhs[i].getProdi() << endl;
        cout << "   NIM          : " << mhs[i].getNim() << endl;
        cout << "   IPK          : " << mhs[i].getIpk() << endl;
        tampilkanKartu(mhs[i]);
    }

    cout << "=== Daftar Dosen (" << dsn.size() << ") ===\n";
    for (size_t i = 0; i < dsn.size(); i++) {
        cout << i + 1 << "."; 
        cout << " ID Entitas   : " << dsn[i].getIdEntitas() << endl;
        cout << "   Nama         : " << dsn[i].getNama() << endl;
        cout << "   Prodi        : " << dsn[i].getProdi() << endl;
        cout << "   NIDN         : " << dsn[i].getNidn() << endl;
        cout << "   Mata Kuliah  : " << dsn[i].getMataKuliah() << endl;
        tampilkanKartu(dsn[i]);
    }

    cout << "=== Daftar Petugas Kebersihan (" << ptg.size() << ") ===\n";
    for (size_t i = 0; i < ptg.size(); i++) {
        cout << i + 1 << "."; 
        cout << " ID Entitas   : " << ptg[i].getIdEntitas() << endl;
        cout << "   Nama         : " << ptg[i].getNama() << endl;
        cout << "   Prodi/Unit   : " << ptg[i].getProdi() << endl;
        cout << "   ID Petugas   : " << ptg[i].getIdPetugas() << endl;
        cout << "   Shift Kerja  : " << ptg[i].getShiftKerja() << endl;
        tampilkanKartu(ptg[i]);
    }
}
void tampilkanSemua(vector<Mahasiswa> &mhs, vector<Dosen> &dsn, vector<PetugasKebersihan> &ptg) {
    cout << "=== Daftar Mahasiswa (" << mhs.size() << ") ===\n";
    for (size_t i = 0; i < mhs.size(); i++) {
        cout << i + 1 << "."; 
        cout << " ID Entitas   : " << mhs[i].getIdEntitas() << endl;
        cout << "   Nama         : " << mhs[i].getNama() << endl;
        cout << "   Prodi        : " << mhs[i].getProdi() << endl;
        cout << "   NIM          : " << mhs[i].getNim() << endl;
        cout << "   IPK          : " << mhs[i].getIpk() << endl;
        tampilkanKartu(mhs[i]);
    }

    cout << "=== Daftar Dosen (" << dsn.size() << ") ===\n";
    for (size_t i = 0; i < dsn.size(); i++) {
        cout << i + 1 << "."; 
        cout << " ID Entitas   : " << dsn[i].getIdEntitas() << endl;
        cout << "   Nama         : " << dsn[i].getNama() << endl;
        cout << "   Prodi        : " << dsn[i].getProdi() << endl;
        cout << "   NIDN         : " << dsn[i].getNidn() << endl;
        cout << "   Mata Kuliah  : " << dsn[i].getMataKuliah() << endl;
        tampilkanKartu(dsn[i]);
    }

    cout << "=== Daftar Petugas Kebersihan (" << ptg.size() << ") ===\n";
    for (size_t i = 0; i < ptg.size(); i++) {
        cout << i + 1 << "."; 
        cout << " ID Entitas   : " << ptg[i].getIdEntitas() << endl;
        cout << "   Nama         : " << ptg[i].getNama() << endl;
        cout << "   Prodi/Unit   : " << ptg[i].getProdi() << endl;
        cout << "   ID Petugas   : " << ptg[i].getIdPetugas() << endl;
        cout << "   Shift Kerja  : " << ptg[i].getShiftKerja() << endl;
        tampilkanKartu(ptg[i]);
    }
}

void isiDataDummy(vector<Mahasiswa> &mhs, vector<Dosen> &dsn, vector<PetugasKebersihan> &ptg) {
    Mahasiswa m1("M001", "Budi Santoso", "Informatika", "2023001", 3.75);
    m1.setKartu(KartuAkses("KM001", "Mahasiswa"));
    Mahasiswa m2("M002", "Rina Wulandari", "Sistem Informasi", "2023002", 3.52);
    m2.setKartu(KartuAkses("KM002", "Mahasiswa"));
    mhs.push_back(m1); mhs.push_back(m2);

    Dosen d1("D004", "Dr. Siti Aminah", "Informatika");
    d1.setNidn("0412345678"); d1.setMataKuliah(3);
    d1.setKartu(KartuAkses("KD004", "Dosen"));
    Dosen d2("D005", "Prof. Hendra Gunawan", "Sistem Informasi");
    d2.setNidn("0423456789"); d2.setMataKuliah(2);
    d2.setKartu(KartuAkses("KD005", "Dosen"));
    dsn.push_back(d1); dsn.push_back(d2);

    PetugasKebersihan p1("P006", "Pak Joko", "Gedung A", "IP001", "Pagi");
    p1.setKartu(KartuAkses("KP006", "Petugas"));
    PetugasKebersihan p2("P007", "Bu Ningsih", "Gedung B", "IP002", "Siang");
    p2.setKartu(KartuAkses("KP007", "Petugas"));
    ptg.push_back(p1); ptg.push_back(p2);
}

int main() {
    vector<Mahasiswa> daftarMhs;
    vector<Dosen> daftarDosen;
    vector<PetugasKebersihan> daftarPetugas;
    isiDataDummy(daftarMhs, daftarDosen, daftarPetugas);

    while (true) {
        cout << "\n===== MENU ENTITAS KAMPUS =====\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Tambah Dosen\n";
        cout << "3. Tambah Petugas Kebersihan\n";
        cout << "4. Tampilkan Semua Data\n";
        cout << "0. Keluar\n";
        string pilih = inputTeks("Pilih menu");

        if (pilih == "1") tambahMahasiswa(daftarMhs);
        else if (pilih == "2") tambahDosen(daftarDosen);
        else if (pilih == "3") tambahPetugas(daftarPetugas);
        else if (pilih == "4") tampilkanSemua(daftarMhs, daftarDosen, daftarPetugas);
        else if (pilih == "0") { cout << "Program selesai.\n"; break; }
        else cout << "Pilihan tidak valid.\n";
    }
    return 0;
}