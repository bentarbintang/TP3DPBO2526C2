#include <iostream>
using namespace std;

class KartuAkses {

    private:
        string idKartu;
        string levelAkses;
    
    public:
        // Default constructor
        KartuAkses() {
        }
    
        KartuAkses(string idKartu, string levelAkses) {
            this->idKartu = idKartu;
            this->levelAkses = levelAkses;
        }

        // Getter and Setter for idKartu
        string getIdKartu() {
            return idKartu;
        }

        void setIdKartu(string idKartu) {
            this->idKartu = idKartu;
        }

        // Getter and Setter for levelAkses
        string getLevelAkses() {
            return levelAkses;
        }

        void setLevelAkses(string levelAkses) {
            this->levelAkses = levelAkses;
        }
};