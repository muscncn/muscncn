import random

def shuffle_list(input_list):
    """
    """
    shuffled_list = input_list.copy()
    random.shuffle(shuffled_list)
    return shuffled_list

def main():
    print("=== List Shuffle ===")
    
    user_input = input("Enter a list of items, separated by commas: ")
    items = [item.strip() for item in user_input.split(",")]

    shuffled_items = shuffle_list(items)

    print("\nOriginal List:", items)
    print("Shuffled List:", shuffled_items)

if __name__ == "__main__":
    main()