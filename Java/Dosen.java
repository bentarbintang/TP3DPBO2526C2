public class Dosen extends EntitasKampus {
    private String nidn;
    private int mataKuliah;

    public Dosen() {
    }

    public Dosen(String idEntitas, String nama, String prodi) {
        super(idEntitas, nama, prodi);
    }

    public String getNidn() { return nidn; }
    public void setNidn(String nidn) { this.nidn = nidn; }

    public int getMataKuliah() { return mataKuliah; }
    public void setMataKuliah(int mataKuliah) { this.mataKuliah = mataKuliah; }
}