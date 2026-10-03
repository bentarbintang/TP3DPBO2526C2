public class Mahasiswa extends EntitasKampus {
    private String nim;
    private double ipk;

    public Mahasiswa() {
    }

    public Mahasiswa(String idEntitas, String nama, String prodi, String nim, double ipk) {
        super(idEntitas, nama, prodi);
        this.nim = nim;
        this.ipk = ipk;
    }

    public String getNim() { return nim; }
    public void setNim(String nim) { this.nim = nim; }

    public double getIpk() { return ipk; }
    public void setIpk(double ipk) { this.ipk = ipk; }
}