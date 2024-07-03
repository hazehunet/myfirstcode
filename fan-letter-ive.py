def generate_fan_letter():
    print("Welcome to the IVE Fan Letter Generator!\n")
    
    # Collecting user inputs
    name = input("What is your name? ")
    favorite_member = input("Who is your favorite member of IVE? ")
    reason = input("Why do you love IVE? ")
    favorite_song = input("What is your favorite IVE song? ")
    message = input("Write a personal message to IVE: ")

    # Fan letter template
    letter = f"""
    Dear IVE,

    My name is {name}, and I am a huge fan of your group! I especially admire {favorite_member}. 
    Your music and performances always bring so much joy and inspiration to my life.

    I love IVE because {reason}. Your talent and hard work are truly admirable, and you always 
    bring your best to the stage. Every performance is a masterpiece!

    My favorite song is "{favorite_song}". It always lifts my spirits and motivates me to be the 
    best version of myself. Each time I listen to it, I am reminded of the positive impact your 
    music has on me.

    {message}

    Thank you so much for being an amazing group and for all the wonderful music you create. 
    I will continue to support you and cheer you on in all your future endeavors.

    With love,
    {name}
    """
    
    # Displaying the generated letter
    print("\nYour fan letter to IVE:\n")
    print(letter)

if __name__ == "__main__":
    generate_fan_letter()