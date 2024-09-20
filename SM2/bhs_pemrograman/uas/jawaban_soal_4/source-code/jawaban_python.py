import mysql.connector
from mysql.connector import Error

def create_connection(host_name, user_name, user_password, db_name):
    connection = None
    try:
        connection = mysql.connector.connect(
            host=host_name,
            user=user_name,
            passwd=user_password,
            database=db_name
        )
        print("Koneksi ke MySQL DB berhasil")
    except Error as e:
        print(f"Error: '{e}'")
    
    return connection

def create_table(connection):
    cursor = connection.cursor()
    query = """
    CREATE TABLE IF NOT EXISTS pelanggan (
        id INT AUTO_INCREMENT PRIMARY KEY,
        nama VARCHAR(100) NOT NULL,
        alamat VARCHAR(100) NOT NULL,
        umur INT NOT NULL
    )
    """
    try:
        cursor.execute(query)
        print("Tabel berhasil dibuat")
    except Error as e:
        print(f"Error: '{e}'")

def insert_data(connection, nama, alamat, umur):
    cursor = connection.cursor()
    query = """
    INSERT INTO pelanggan (nama, alamat, umur) 
    VALUES (%s, %s, %s)
    """
    try:
        cursor.execute(query, (nama, alamat, umur))
        connection.commit()
        print("Data berhasil disisipkan")
    except Error as e:
        print(f"Error: '{e}'")

def select_data(connection):
    cursor = connection.cursor()
    query = "SELECT * FROM pelanggan"
    try:
        cursor.execute(query)
        result = cursor.fetchall()
        for row in result:
            print(row)
    except Error as e:
        print(f"Error: '{e}'")

# Koneksi ke database
connection = create_connection("localhost", "root", "123456789", "toko")

# Membuat tabel
create_table(connection)

# Menyisipkan data
insert_data(connection, "John Doe", "Jl. Merdeka 123", 28)
insert_data(connection, "Jane Doe", "Jl. Pahlawan 456", 32)

# Mengambil data
select_data(connection)

# Menutup koneksi
if connection.is_connected():
    connection.close()
    print("Koneksi ke MySQL DB ditutup")
