#include <iostream>
#include "EntitasKampus.cpp"
using namespace std;

class Mahasiswa : public EntitasKampus {

    private:
        string nim;
        double ipk;
        
    
    public:
        Mahasiswa() {
        }

        Mahasiswa(string idEntitas, string nama, string prodi, string nim, double ipk) : EntitasKampus(idEntitas, nama, prodi) {
            this->nim = nim;
            this->ipk = ipk;
        }

        // Getter and Setter for nim
        string getNim() {
            return nim;
        }

        void setNim(string nim) {
            this->nim = nim;
        }

        // Getter and Setter for ipk
        double getIpk() {
            return ipk;
        }

        void setIpk(double ipk) {
            this->ipk = ipk;
        }
};