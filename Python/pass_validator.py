password = input("Enter your password: ")

# 3 stage validation check:
# - at least 8 characters long
# - at least one uppercase character
# - at least one digit

# flag variables to track state
is_right_len = False
has_uppercase = False
has_digit = False
is_valid = False


# methods to check for password requirements
def check_length(password):
    global is_right_len
    if len(password) >= 8:
        is_right_len = True
        return is_right_len


def check_case(password):
    global has_uppercase
    for letter in password:
        if letter.isupper():
            has_uppercase = True
            return has_uppercase


def check_digit(password):
    global has_digit
    for letter in password:
        if letter.isdigit():
            has_digit = True
            return has_digit


def check_validity(password, is_right_len, has_uppercase, has_digit):
    is_right_len = check_length(password)
    has_uppercase = check_case(password)
    has_digit = check_digit(password)

    while True:
        if is_right_len and has_uppercase and has_digit:
            break
        elif not is_right_len:
            password = input("Password must be at least 8 characters. Try again.\n")
            is_right_len = check_length(password)
            has_uppercase = check_case(password)
            has_digit = check_digit(password)

        elif not has_uppercase:
            password = input(
                "Password must contain at least 1 uppercase character. Try again.\n"
            )
            has_uppercase = check_case(password)
            is_right_len = check_length(password)
            has_digit = check_digit(password)

        elif not has_digit:
            password = input("Password must contain at least one number. Try again.\n")
            has_digit = check_digit(password)
            has_uppercase = check_case(password)
            is_right_len = check_length(password)

    if is_right_len and has_uppercase and has_digit:
        return True
    else:
        return False


is_valid = check_validity(password, is_right_len, has_uppercase, has_digit)

if is_valid:
    print("Password is strong!")
elif not is_valid:
    print("Something weird happened and is_valid is false!")
