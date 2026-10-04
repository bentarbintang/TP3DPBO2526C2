from EntitasKampus import EntitasKampus

class Dosen(EntitasKampus):
    def __init__(self, id_entitas="", nama="", prodi="", nidn="", mata_kuliah=0):
        super().__init__(id_entitas, nama, prodi)
        self._nidn = nidn
        self._mata_kuliah = mata_kuliah

    def get_nidn(self):
        return self._nidn

    def set_nidn(self, nidn):
        self._nidn = nidn

    def get_mata_kuliah(self):
        return self._mata_kuliah

    def set_mata_kuliah(self, mata_kuliah):
        self._mata_kuliah = mata_kuliah