import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);

    static String inputTeks(String label) {
        System.out.print(label + ": ");
        return sc.nextLine();
    }

    static double inputDesimal(String label) {
        while (true) {
            try {
                return Double.parseDouble(inputTeks(label).trim());
            } catch (NumberFormatException e) {
                System.out.println("  Input harus angka, coba lagi.");
            }
        }
    }

    static int inputInteger(String label) {
        while (true) {
            try {
                return Integer.parseInt(inputTeks(label).trim());
            } catch (NumberFormatException e) {
                System.out.println("  Input harus bilangan bulat, coba lagi.");
            }
        }
    }

    static KartuAkses inputKartu() {
        String id = inputTeks("ID Kartu");
        String level = inputTeks("Level Akses");
        return new KartuAkses(id, level);
    }

    static void tambahMahasiswa(ArrayList<Mahasiswa> daftar) {
        System.out.println("\n--- Tambah Mahasiswa ---");
        String id = inputTeks("ID Entitas");
        String nama = inputTeks("Nama");
        String prodi = inputTeks("Prodi");
        String nim = inputTeks("NIM");
        double ipk = inputDesimal("IPK");
        Mahasiswa m = new Mahasiswa(id, nama, prodi, nim, ipk);
        m.setKartu(inputKartu());
        daftar.add(m);
        System.out.println("Data mahasiswa berhasil ditambahkan.");
    }

    static void tambahDosen(ArrayList<Dosen> daftar) {
        System.out.println("\n--- Tambah Dosen ---");
        String id = inputTeks("ID Entitas");
        String nama = inputTeks("Nama");
        String prodi = inputTeks("Prodi");
        Dosen d = new Dosen(id, nama, prodi);
        d.setNidn(inputTeks("NIDN"));
        d.setMataKuliah(inputInteger("Jumlah Mata Kuliah"));
        d.setKartu(inputKartu());
        daftar.add(d);
        System.out.println("Data dosen berhasil ditambahkan.");
    }

    static void tambahPetugas(ArrayList<PetugasKebersihan> daftar) {
        System.out.println("\n--- Tambah Petugas Kebersihan ---");
        String id = inputTeks("ID Entitas");
        String nama = inputTeks("Nama");
        String prodi = inputTeks("Prodi/Unit");
        String idPetugas = inputTeks("ID Petugas");
        String shift = inputTeks("Shift Kerja");
        PetugasKebersihan p = new PetugasKebersihan(id, nama, prodi, idPetugas, shift);
        p.setKartu(inputKartu());
        daftar.add(p);
        System.out.println("Data petugas berhasil ditambahkan.");
    }

    static void tampilkanKartu(EntitasKampus e) {
        System.out.println("   ID Kartu     : " + e.getKartu().getIdKartu());
        System.out.println("   Level Akses  : " + e.getKartu().getLevelAkses());
        System.out.println("\n");
    }

    static void tampilkanSemua(ArrayList<Mahasiswa> mhs, ArrayList<Dosen> dsn, ArrayList<PetugasKebersihan> ptg) {
        System.out.println("=== Daftar Mahasiswa (" + mhs.size() + ") ===");
        for (int i = 0; i < mhs.size(); i++) {
            Mahasiswa m = mhs.get(i);
            System.out.print((i + 1) + ".");
            System.out.println(" ID Entitas   : " + m.getIdEntitas());
            System.out.println("   Nama         : " + m.getNama());
            System.out.println("   Prodi        : " + m.getProdi());
            System.out.println("   NIM          : " + m.getNim());
            System.out.println("   IPK          : " + m.getIpk());
            tampilkanKartu(m);
        }

        System.out.println("=== Daftar Dosen (" + dsn.size() + ") ===");
        for (int i = 0; i < dsn.size(); i++) {
            Dosen d = dsn.get(i);
            System.out.print((i + 1) + ".");
            System.out.println(" ID Entitas   : " + d.getIdEntitas());
            System.out.println("   Nama         : " + d.getNama());
            System.out.println("   Prodi        : " + d.getProdi());
            System.out.println("   NIDN         : " + d.getNidn());
            System.out.println("   Mata Kuliah  : " + d.getMataKuliah());
            tampilkanKartu(d);
        }

        System.out.println("=== Daftar Petugas Kebersihan (" + ptg.size() + ") ===");
        for (int i = 0; i < ptg.size(); i++) {
            PetugasKebersihan p = ptg.get(i);
            System.out.print((i + 1) + ".");
            System.out.println(" ID Entitas   : " + p.getIdEntitas());
            System.out.println("   Nama         : " + p.getNama());
            System.out.println("   Prodi/Unit   : " + p.getProdi());
            System.out.println("   ID Petugas   : " + p.getIdPetugas());
            System.out.println("   Shift Kerja  : " + p.getShiftKerja());
            tampilkanKartu(p);
        }
    }

    static void isiDataDummy(ArrayList<Mahasiswa> mhs, ArrayList<Dosen> dsn, ArrayList<PetugasKebersihan> ptg) {
        Mahasiswa m1 = new Mahasiswa("M001", "Budi Santoso", "Informatika", "2023001", 3.75);
        m1.setKartu(new KartuAkses("KM001", "Mahasiswa"));
        Mahasiswa m2 = new Mahasiswa("M002", "Rina Wulandari", "Sistem Informasi", "2023002", 3.52);
        m2.setKartu(new KartuAkses("KM002", "Mahasiswa"));
        mhs.add(m1); mhs.add(m2);

        Dosen d1 = new Dosen("D001", "Dr. Siti Aminah", "Informatika");
        d1.setNidn("0412345678"); d1.setMataKuliah(3);
        d1.setKartu(new KartuAkses("KD001", "Dosen"));
        Dosen d2 = new Dosen("D002", "Prof. Hendra Gunawan", "Sistem Informasi");
        d2.setNidn("0423456789"); d2.setMataKuliah(2);
        d2.setKartu(new KartuAkses("KD002", "Dosen"));
        dsn.add(d1); dsn.add(d2);

        PetugasKebersihan p1 = new PetugasKebersihan("P001", "Pak Joko", "Gedung A", "IP001", "Pagi");
        p1.setKartu(new KartuAkses("KP001", "Petugas"));
        PetugasKebersihan p2 = new PetugasKebersihan("P002", "Bu Ningsih", "Gedung B", "IP002", "Siang");
        p2.setKartu(new KartuAkses("KP002", "Petugas"));
        ptg.add(p1); ptg.add(p2);
    }

    public static void main(String[] args) {
        ArrayList<Mahasiswa> daftarMhs = new ArrayList<>();
        ArrayList<Dosen> daftarDosen = new ArrayList<>();
        ArrayList<PetugasKebersihan> daftarPetugas = new ArrayList<>();
        isiDataDummy(daftarMhs, daftarDosen, daftarPetugas);

        while (true) {
            System.out.println("===== MENU ENTITAS KAMPUS =====");
            System.out.println("1. Tambah Mahasiswa");
            System.out.println("2. Tambah Dosen");
            System.out.println("3. Tambah Petugas Kebersihan");
            System.out.println("4. Tampilkan Semua Data");
            System.out.println("0. Keluar");
            String pilih = inputTeks("Pilih menu").trim();

            switch (pilih) {
                case "1": tambahMahasiswa(daftarMhs); break;
                case "2": tambahDosen(daftarDosen); break;
                case "3": tambahPetugas(daftarPetugas); break;
                case "4": tampilkanSemua(daftarMhs, daftarDosen, daftarPetugas); break;
                case "0":
                    System.out.println("Program selesai.");
                    return;
                default: System.out.println("Pilihan tidak valid.");
            }
        }
    }
}