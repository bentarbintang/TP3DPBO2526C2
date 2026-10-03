public class EntitasKampus {
    protected String idEntitas;
    protected String nama;
    protected String prodi;
    protected KartuAkses kartu = new KartuAkses(); // komposisi

    public EntitasKampus() {
    }

    public EntitasKampus(String idEntitas, String nama, String prodi) {
        this.idEntitas = idEntitas;
        this.nama = nama;
        this.prodi = prodi;
    }

    public String getIdEntitas() { return idEntitas; }
    public void setIdEntitas(String idEntitas) { this.idEntitas = idEntitas; }

    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    public String getProdi() { return prodi; }
    public void setProdi(String prodi) { this.prodi = prodi; }

    public KartuAkses getKartu() { return kartu; }
    public void setKartu(KartuAkses kartu) { this.kartu = kartu; }
}