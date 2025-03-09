import random
import string

def generate_password(length=12):
    characters = string.ascii_letters + string.digits + string.punctuation

    password = ''.join(random.choice(characters) for _ in range(length))
    
    return password

def main():
    print("=== Random Password Generator ===")
    
    try:
        length = int(input("Enter the length of the password (default is 12): ") or 12)
        if length < 4:
            print("Password length must be at least 4 characters. Setting to 4.")
            length = 4
    except ValueError:
        print("Invalid input. Using default length of 12.")
        length = 12

    password = generate_password(length)
    print("\nYour random password is:", password)

if __name__ == "__main__":
    main()