# Define a dictionary to store course information
courses = {}

# Define a dictionary to store student information
students = {}

# Define a dictionary to store grades
grades = {}

# Read input data
current_section = None
while True:
    try:
        line = input()
    except EOFError:
        break
    
    if line == "Courses":
        current_section = "Courses"
    elif line == "Students":
        current_section = "Students"
    elif line == "Grades":
        current_section = "Grades"
    elif line == "EndOfInput":
        break
    else:
        if current_section == "Courses":
            course_code, course_name, semester, year, instructor = line.split("~")
            courses[course_code] = (course_name, semester, year, instructor)
        elif current_section == "Students":
            roll_number, full_name = line.split("~")
            students[roll_number] = full_name
        elif current_section == "Grades":
            course_code, semester, year, roll_number, grade = line.split("~")
            grades[(roll_number, course_code)] = grade

# Calculate and print grade point averages
for roll_number, full_name in sorted(students.items()):
    total_grade_points = 0
    total_courses = 0
    for course_code, _ in courses.items():
        if (roll_number, course_code) in grades:
            grade = grades[(roll_number, course_code)]
            grade_points = {
                "A": 10, "AB": 9, "B": 8, "BC": 7,
                "C": 6, "CD": 5, "D": 4
            }.get(grade, 0)
            total_grade_points += grade_points
            total_courses += 1
    if total_courses == 0:
        gpa = 0
    else:
        gpa = total_grade_points / total_courses
    print(f"{roll_number}~{full_name}~{round(gpa, 2)}")
