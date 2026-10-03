#include <iostream>
#include "EntitasKampus.cpp"
using namespace std;

class PetugasKebersihan : public EntitasKampus {

    private :
        string idPetugas;
        string shiftKerja;

    public :
        PetugasKebersihan() {   
        }

        PetugasKebersihan(string idEntitas, string nama, string prodi, string idPetugas, string shiftKerja) : EntitasKampus(idEntitas, nama, prodi) {
            this->idPetugas = idPetugas;
            this->shiftKerja = shiftKerja;
        }

        // Getter and Setter for idPetugas
        string getIdPetugas() {
            return idPetugas;
        }

        void setIdPetugas(string idPetugas) {
            this->idPetugas = idPetugas;
        }

        // Getter and Setter for shiftKerja
        string getShiftKerja() {
            return shiftKerja;
        }

        void setShiftKerja(string shiftKerja) {
            this->shiftKerja = shiftKerja;
        }
};