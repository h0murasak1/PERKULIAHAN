class Mahasiswa:
    def __init__(self, name):
        self.name = name

    def pilih_mata_kuliah(self):
        print(f"{self.name} is selecting courses.")

    def menerima_penjadwalan_perkuliahan(self):
        print(f"{self.name} is receiving the course schedule.")


class Dosen:
    def __init__(self, name):
        self.name = name

    def mengajar(self):
        print(f"{self.name} is teaching.")

    def mengirim_nilai(self):
        print(f"{self.name} is sending grades.")

    def tolak_mengajar(self):
        print(f"{self.name} is refusing to teach.")


class Operator:
    def __init__(self, name):
        self.name = name

    def atur_jadwal(self):
        print(f"{self.name} is scheduling classes.")

    def atur_ruang(self):
        print(f"{self.name} is assigning classrooms.")


# Simulate interactions
mahasiswa = Mahasiswa("Alice")
dosen = Dosen("Bob")
operator = Operator("Charlie")

mahasiswa.pilih_mata_kuliah()
mahasiswa.menerima_penjadwalan_perkuliahan()
dosen.mengajar()
dosen.mengirim_nilai()
dosen.tolak_mengajar()
operator.atur_jadwal()
operator.atur_ruang()