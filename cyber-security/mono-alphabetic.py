# Semanur Bilada - Cyber Security
# HM2: Mono Alphabetic Encryption + Dencryption example

def mono_alphabetic_encrypt(text, key):
    chiper_text = ""

    for char in text:
        # If it is uppercase
        if char.isupper():
            # returns the unicode for a one-character string with calculation
            new_char = chr((ord(char) + key - 65) % 26 + 65)
            chiper_text += new_char

        # If it is lowercase
        elif char.islower():
            new_char = chr((ord(char) + key - 97) % 26 + 97)
            chiper_text += new_char

        else:
            chiper_text += char
    return chiper_text


def mono_alphabetic_decrypt(chiper_text, key):
    text = "" # plain text

    for char in chiper_text:
        # If it is uppercase
        if char.isupper():
            new_char = chr((ord(char) - key - 65) % 26 + 65)
            text += new_char

        # If it is lowercase
        elif char.islower():
            new_char = chr((ord(char) - key - 97) % 26 + 97)
            text += new_char

        else:
            text += char
    return text


def main():
    # Take data from user to testing 
    text = input("Please enter the text you want to encrypt (plaintext): ")
    key = int(input("Please enter the key value you want to use (ex: 3): "))

    chiper_text = mono_alphabetic_encrypt(text, key)
    print("Chiper Text:", chiper_text)

    plain_text = mono_alphabetic_decrypt(chiper_text, key)
    print("Plain Text:", plain_text)

if __name__ == "__main__":
    main()