from KartuAkses import KartuAkses

class EntitasKampus:
    def __init__(self, id_entitas="", nama="", prodi=""):
        self._id_entitas = id_entitas
        self._nama = nama
        self._prodi = prodi
        self._kartu = KartuAkses()  # komposisi: dibuat & dimiliki entitas

    def get_id_entitas(self):
        return self._id_entitas

    def set_id_entitas(self, id_entitas):
        self._id_entitas = id_entitas

    def get_nama(self):
        return self._nama

    def set_nama(self, nama):
        self._nama = nama

    def get_prodi(self):
        return self._prodi

    def set_prodi(self, prodi):
        self._prodi = prodi

    def get_kartu(self):
        return self._kartu

    def set_kartu(self, kartu):
        self._kartu = kartu