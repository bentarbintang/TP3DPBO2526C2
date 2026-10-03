class KartuAkses:

    def __init__(self, id_kartu="", level_akses=""):
        self._id_kartu = id_kartu
        self._level_akses = level_akses

    def get_id_kartu(self):
        return self._id_kartu

    def set_id_kartu(self, id_kartu):
        self._id_kartu = id_kartu

    def get_level_akses(self):
        return self._level_akses

    def set_level_akses(self, level_akses):
        self._level_akses = level_akses