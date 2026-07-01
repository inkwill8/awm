from datetime import datetime


def write_file(message):
    date_and_time = datetime.now()
    timestamp = date_and_time.strftime("%d/%m/%Y %H:%M:%S")

    # create the log file and append to it so we can have multiple timestamped messages
    file = open("log.txt", "a")
    file.write(message + "  " + timestamp + "\n")
    file.close()
    return file


def read_file():
    file = open("log.txt")
    content = file.read()
    file.close()
    return content


def check_file_status(file):
    if file.closed:
        print("Log message successfully written!")
    else:
        print("Some error occurred.")


def count_log_entries(file):
    file = open(file)
    counter = 0
    for line in file:
        if line[-1] == "\n":
            counter += 1
    file.close()
    return counter


# Program Start
file = "log.txt"

print("Would you like to write a log message or read from the log file?")
print("1. to write... 2. to read... 3. to count log entries...")
choice = input("Choice: ")
int_choice = int(choice)

if int_choice == 1:
    print("What would you like to save to the log file?\n")
    message = input("Log Message: ")
    log_file = write_file(message)
    check_file_status(log_file)
elif int_choice == 2:
    text = read_file()
    print(text)
elif int_choice == 3:
    entries = count_log_entries(file)
    print(entries)
else:
    print("Not a valid input.")
