from cryptography.fernet import Fernet

def generate_key():
    # Generate a key and save it to a file
    key = Fernet.generate_key()
    with open('encryption_key.key', 'wb') as key_file:
        key_file.write(key)

def load_key():
    # Load the key from the file
    with open('encryption_key.key', 'rb') as key_file:
        return key_file.read()

def encrypt_file(filename, key):
    # Read the content of the file
    with open(filename, 'rb') as file:
        data = file.read()

    cipher = Fernet(key)
    encrypted_data = cipher.encrypt(data)

    # Write the encrypted content back to the file
    with open(filename, 'wb') as file:
        file.write(encrypted_data)

# Generate a key and save it to a file
generate_key()

# Load the key
key = load_key()

# Encrypt the Python file
encrypt_file('SurgaAtauNeraka.py', key)
