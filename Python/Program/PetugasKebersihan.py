from EntitasKampus import EntitasKampus

class PetugasKebersihan(EntitasKampus):
    def __init__(self, id_entitas="", nama="", prodi="", id_petugas="", shift_kerja=""):
        super().__init__(id_entitas, nama, prodi)
        self._id_petugas = id_petugas
        self._shift_kerja = shift_kerja

    def get_id_petugas(self):
        return self._id_petugas

    def set_id_petugas(self, id_petugas):
        self._id_petugas = id_petugas

    def get_shift_kerja(self):
        return self._shift_kerja

    def set_shift_kerja(self, shift_kerja):
        self._shift_kerja = shift_kerja