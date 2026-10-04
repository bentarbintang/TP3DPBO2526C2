#pragma once
#include <iostream>
#include "KartuAkses.cpp"
using namespace std;

class EntitasKampus {

    protected:
        string idEntitas;
        string nama;
        string prodi;
        KartuAkses kartu;

    public:
        EntitasKampus(){
        }

        EntitasKampus(string idEntitas, string nama, string prodi){
            this->idEntitas = idEntitas;
            this->nama = nama;
            this->prodi = prodi;
        }

        // Getter and Setter for idEntitas
        string getIdEntitas() {
            return idEntitas;
        }

        void setIdEntitas(string idEntitas) {
            this->idEntitas = idEntitas;
        }

        // Getter and Setter for nama
        string getNama() {
            return nama;
        }

        void setNama(string nama) {
            this->nama = nama;
        }

        // Getter and Setter for prodi
        string getProdi() {
            return prodi;
        }

        void setProdi(string prodi) {
            this->prodi = prodi;
        }

        // Getter and Setter for kartu
        KartuAkses getKartu() {
            return kartu;
        }

        void setKartu(KartuAkses kartu) {
            this->kartu = kartu;
        }
};