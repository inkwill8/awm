inventory = {"apples": 10, "bananas": 15, "oranges": 8}


def check_inventory(search_term):
    if search_term in inventory:
        print(f"{search_term}: {inventory[search_term]}")
    else:
        print("Sorry, that item is not in stock.")

user_input = input('Search Item: ')
check_inventory(user_input)
