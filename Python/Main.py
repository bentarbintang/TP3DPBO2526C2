from KartuAkses import KartuAkses
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from PetugasKebersihan import PetugasKebersihan

def input_angka(label, tipe):
    while True:
        try:
            return tipe(input(f"{label}: "))
        except ValueError:
            print("  Input tidak valid, coba lagi.")

def input_kartu():
    id_kartu = input("ID Kartu: ")
    level = input("Level Akses: ")
    return KartuAkses(id_kartu, level)

def tampilkan_kartu(e):
    print(f"  ID Kartu     : {e.get_kartu().get_id_kartu()}")
    print(f"  Level Akses  : {e.get_kartu().get_level_akses()}")

def tambah_mahasiswa(daftar):
    print("\n--- Tambah Mahasiswa ---")
    m = Mahasiswa(input("ID Entitas: "), input("Nama: "), input("Prodi: "),
                input("NIM: "), input_angka("IPK", float))
    m.set_kartu(input_kartu())
    daftar.append(m)
    print("Data mahasiswa berhasil ditambahkan.")

def tambah_dosen(daftar):
    print("\n--- Tambah Dosen ---")
    d = Dosen(input("ID Entitas: "), input("Nama: "), input("Prodi: "))
    d.set_nidn(input("NIDN: "))
    d.set_mata_kuliah(input_angka("Jumlah Mata Kuliah", int))
    d.set_kartu(input_kartu())
    daftar.append(d)
    print("Data dosen berhasil ditambahkan.")

def tambah_petugas(daftar):
    print("\n--- Tambah Petugas Kebersihan ---")
    p = PetugasKebersihan(input("ID Entitas: "), input("Nama: "), input("Prodi/Unit: "),
                        input("ID Petugas: "), input("Shift Kerja: "))
    p.set_kartu(input_kartu())
    daftar.append(p)
    print("Data petugas berhasil ditambahkan.")

def tampilkan_semua(mhs, dsn, ptg):
    print(f"\n=== Daftar Mahasiswa ({len(mhs)}) ===")
    for i, m in enumerate(mhs, 1):
        print(f"{i}.")
        print(f"  ID Entitas   : {m.get_id_entitas()}")
        print(f"  Nama         : {m.get_nama()}")
        print(f"  Prodi        : {m.get_prodi()}")
        print(f"  NIM          : {m.get_nim()}")
        print(f"  IPK          : {m.get_ipk()}")
        tampilkan_kartu(m)

    print(f"\n=== Daftar Dosen ({len(dsn)}) ===")
    for i, d in enumerate(dsn, 1):
        print(f"{i}.")
        print(f"  ID Entitas   : {d.get_id_entitas()}")
        print(f"  Nama         : {d.get_nama()}")
        print(f"  Prodi        : {d.get_prodi()}")
        print(f"  NIDN         : {d.get_nidn()}")
        print(f"  Mata Kuliah  : {d.get_mata_kuliah()}")
        tampilkan_kartu(d)

    print(f"\n=== Daftar Petugas Kebersihan ({len(ptg)}) ===")
    for i, p in enumerate(ptg, 1):
        print(f"{i}.")
        print(f"  ID Entitas   : {p.get_id_entitas()}")
        print(f"  Nama         : {p.get_nama()}")
        print(f"  Prodi/Unit   : {p.get_prodi()}")
        print(f"  ID Petugas   : {p.get_id_petugas()}")
        print(f"  Shift Kerja  : {p.get_shift_kerja()}")
        tampilkan_kartu(p)

def isi_data_dummy(mhs, dsn, ptg):
    for args, level in [
        (("E001", "Budi Santoso", "Informatika", "2023001", 3.75), "K001"),
        (("E002", "Rina Wulandari", "Sistem Informasi", "2023002", 3.52), "K002"),
        (("E003", "Andi Pratama", "Teknik Elektro", "2022015", 3.10), "K003"),
    ]:
        m = Mahasiswa(*args)
        m.set_kartu(KartuAkses(level, "Mahasiswa"))
        mhs.append(m)

    for args, kartu in [
        (("E004", "Dr. Siti Aminah", "Informatika", "0412345678", 3), "K004"),
        (("E005", "Prof. Hendra Gunawan", "Sistem Informasi", "0423456789", 2), "K005"),
    ]:
        d = Dosen(*args)
        d.set_kartu(KartuAkses(kartu, "Dosen"))
        dsn.append(d)

    for args, kartu in [
        (("E006", "Pak Joko", "Gedung A", "P001", "Pagi"), "K006"),
        (("E007", "Bu Ningsih", "Gedung B", "P002", "Siang"), "K007"),
    ]:
        p = PetugasKebersihan(*args)
        p.set_kartu(KartuAkses(kartu, "Petugas"))
        ptg.append(p)

def main():
    daftar_mhs, daftar_dosen, daftar_petugas = [], [], []
    isi_data_dummy(daftar_mhs, daftar_dosen, daftar_petugas)

    while True:
        print("\n===== MENU ENTITAS KAMPUS =====")
        print("1. Tambah Mahasiswa")
        print("2. Tambah Dosen")
        print("3. Tambah Petugas Kebersihan")
        print("4. Tampilkan Semua Data")
        print("0. Keluar")
        pilih = input("Pilih menu: ").strip()

        if pilih == "1":
            tambah_mahasiswa(daftar_mhs)
        elif pilih == "2":
            tambah_dosen(daftar_dosen)
        elif pilih == "3":
            tambah_petugas(daftar_petugas)
        elif pilih == "4":
            tampilkan_semua(daftar_mhs, daftar_dosen, daftar_petugas)
        elif pilih == "0":
            print("Program selesai.")
            break
        else:
            print("Pilihan tidak valid.")

if __name__ == "__main__":
    main()