public class KartuAkses {
    private String idKartu;
    private String levelAkses;

    public KartuAkses() {
    }

    public KartuAkses(String idKartu, String levelAkses) {
        this.idKartu = idKartu;
        this.levelAkses = levelAkses;
    }

    public String getIdKartu() { return idKartu; }
    public void setIdKartu(String idKartu) { this.idKartu = idKartu; }

    public String getLevelAkses() { return levelAkses; }
    public void setLevelAkses(String levelAkses) { this.levelAkses = levelAkses; }
}