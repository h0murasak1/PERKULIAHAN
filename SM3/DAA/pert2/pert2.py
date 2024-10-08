class User:
    def __init__(self, name):
        self.name = name

    def pesan_menu(self):
        print(f"{self.name} is ordering a menu.")

    def bayar_pesanan(self):
        print(f"{self.name} is paying for the order.")


class Servant:
    def __init__(self, name):
        self.name = name

    def melaporkan_pesanan(self):
        print(f"{self.name} is reporting the order.")


class Chief:
    def __init__(self, name):
        self.name = name

    def memasak_pesanan(self):
        print(f"{self.name} is cooking the order.")


# Simulate interactions
user = User("Alice")
servant = Servant("Bob")
chief = Chief("Charlie")

user.pesan_menu()
user.bayar_pesanan()
servant.melaporkan_pesanan()
chief.memasak_pesanan()