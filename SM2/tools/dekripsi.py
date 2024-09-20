from cryptography.fernet import Fernet

def load_key():
    # Load the key from the file
    with open('encryption_key.key', 'rb') as key_file:
        return key_file.read()

def decrypt_file(filename, key):
    # Read the content of the encrypted file
    with open(filename, 'rb') as file:
        encrypted_data = file.read()

    cipher = Fernet(key)
    decrypted_data = cipher.decrypt(encrypted_data)

    # Save the decrypted content to a new file
    with open('decrypted_' + filename, 'wb') as file:
        file.write(decrypted_data)

# Load the key
key = load_key()

# Decrypt the encrypted file
decrypt_file('SurgaAtauNeraka.py', key)
