print("Welcome to the Python Basic Calculator!\n")
print("Choose two numbers and an operand to perform an operation:\n")
print("(choose a digit between 0 and 9 and +, -, *, /, **, or % as an operand\n")

# first number validation check
first_input = input("First number: ")
while not first_input.isdigit():
    first_input = input("That is not a valid number! Try again: ")

first_num = int(first_input)

# second number validation check
second_input = input("\nSecond Number: ")
while not second_input.isdigit():
    second_input = input("That is not a valid number! Try again: ")

second_num = int(second_input)

# operand validation
operand = input("\nOperand: ")
while (
    operand != "+"
    or operand != "-"
    or operand != "*"
    or operand != "/"
    or operand != "**"
    or operand != "%"
):
    operand = input("That is not a valid operator! Try again: ")

def calculate(num1, num2, operand):
    if operand == '+':
        return num1 + num2
    elif operand == '-':
        return num1 - num2
    elif operand == '*':
        return num1 * num2
