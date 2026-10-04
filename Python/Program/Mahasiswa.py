from EntitasKampus import EntitasKampus

class Mahasiswa(EntitasKampus):
    def __init__(self, id_entitas="", nama="", prodi="", nim="", ipk=0.0):
        super().__init__(id_entitas, nama, prodi)
        self._nim = nim
        self._ipk = ipk

    def get_nim(self):
        return self._nim

    def set_nim(self, nim):
        self._nim = nim

    def get_ipk(self):
        return self._ipk

    def set_ipk(self, ipk):
        self._ipk = ipk