#include <iostream>
#include "EntitasKampus.cpp"
using namespace std;

class Dosen : public EntitasKampus {

    private :
        string nidn;
        int mataKuliah;

    public :
        Dosen() {
        }

        Dosen(string idEntitas, string nama, string prodi) : EntitasKampus(idEntitas, nama, prodi) {
        }

        // Getter and Setter for nidn
        string getNidn() {
            return nidn;
        }

        void setNidn(string nidn) {
            this->nidn = nidn;
        }

        // Getter and Setter for mataKuliah
        int getMataKuliah() {
            return mataKuliah;
        }

        void setMataKuliah(int mataKuliah) {
            this->mataKuliah = mataKuliah;
        }
};

