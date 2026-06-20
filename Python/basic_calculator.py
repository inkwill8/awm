print("Welcome to the Python Basic Calculator!")
print("Choose two numbers and an operand to perform an operation:")
print("(choose a digit between 0 and 9 and +, -, *, /, **, or % as an operand)\n")

# first number validation check
first_input = input("First number: ")
while not first_input.isdigit():
    first_input = input("That is not a valid number! Try again: ")

first_num = int(first_input)

# second number validation check
second_input = input("Second Number: ")
while not second_input.isdigit():
    second_input = input("That is not a valid number! Try again: ")

second_num = int(second_input)

# operand validation
operand = input("Operand: ")
while operand not in ("+", "-", "*", "/", "**", "%"):
    operand = input("That is not a valid operator! Try again: ")


def calculate(num1, num2, operand):
    if operand == "+":
        return num1 + num2
    elif operand == "-":
        return num1 - num2
    elif operand == "*":
        return num1 * num2
    elif operand == "/":
        return num1 / num2
    elif operand == "**":
        return num1**num2
    else:
        return num1 % num2


def operand_as_string(operand):
    if operand == "+":
        return "plus"
    elif operand == "-":
        return "minus"
    elif operand == "*":
        return "times"
    elif operand == "/":
        return "divided by"
    elif operand == "**":
        return "to the power of"
    else:
        return "modulus"


operation = operand_as_string(operand)
result = calculate(first_num, second_num, operand)

print(f"{first_input} {operation} {second_input} is {result}")
