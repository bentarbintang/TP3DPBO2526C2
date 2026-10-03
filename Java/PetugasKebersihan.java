public class PetugasKebersihan extends EntitasKampus {
    private String idPetugas;
    private String shiftKerja;

    public PetugasKebersihan() {
    }

    public PetugasKebersihan(String idEntitas, String nama, String prodi, String idPetugas, String shiftKerja) {
        super(idEntitas, nama, prodi);
        this.idPetugas = idPetugas;
        this.shiftKerja = shiftKerja;
    }

    public String getIdPetugas() { return idPetugas; }
    public void setIdPetugas(String idPetugas) { this.idPetugas = idPetugas; }

    public String getShiftKerja() { return shiftKerja; }
    public void setShiftKerja(String shiftKerja) { this.shiftKerja = shiftKerja; }
}