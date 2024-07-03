import random
import string

def generate_password(length=12):
    if length < 4:
        print("Password length should be at least 4 characters for better security.")
        return None
    
    # Create a pool of characters
    all_characters = string.ascii_letters + string.digits + string.punctuation
    
    # Ensure the password contains at least one character from each category
    password = [
        random.choice(string.ascii_uppercase),
        random.choice(string.ascii_lowercase),
        random.choice(string.digits),
        random.choice(string.punctuation)
    ]
    
    # Fill the rest of the password length with random characters from the pool
    password += random.choices(all_characters, k=length-4)
    
    # Shuffle the characters to ensure randomness
    random.shuffle(password)
    
    # Convert the list to a string
    return ''.join(password)

def main():
    while True:
        try:
            length = int(input("Enter the desired password length (or 0 to exit): "))
            if length == 0:
                print("Exiting the password generator.")
                break
            password = generate_password(length)
            if password:
                print(f"Generated password: {password}")
        except ValueError:
            print("Please enter a valid number.")

if __name__ == "__main__":
    main()