names = ["Alice", "Bob", "Charlie"]
scores = [88, 92, 75]


def calculate_average(grades):
    sum = 0
    for grade in grades:
        sum += grade
    average = sum / len(grades)
    return average


print(f'Average Grade: {calculate_average(scores)}')


def display_grades(students, grades):
    i = 0
    for student in students:
        print(f"{student}: {grades[i]}")
        i += 1
display_grades(names, scores)
