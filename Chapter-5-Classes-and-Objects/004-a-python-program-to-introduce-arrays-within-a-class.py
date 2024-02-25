class Student:
    def __init__(self):
        self.name = ""
        self.bangla = 0
        self.english = 0
        self.math = 0

    def input_data(self):
        print("Name: ", end="")
        self.name = input()
        print("Marks in Bangla: ", end="")
        self.bangla = int(input())
        print("Marks in English: ", end="")
        self.english = int(input())
        print("Marks in Math: ", end="")
        self.math = int(input())
    
    def display_data(self):
        print("Name: ", self.name)
        print("Marks in Bangla: ", self.bangla)
        print("Marks in English: ", self.english)
        print("Marks in Math: ", self.math)
    
if __name__ == '__main__':
    # number_of_students = int(input())
    number_of_students = int(input('How many students: '))
    student_objects = [
        Student()
        for _ in range(number_of_students)
    ]

    for i in range(number_of_students):
        print(f'\nStudent {i+1}:')
        student_objects[i].input_data()
    for i in range(number_of_students):
        print(f'\nStudent {i+1}:')
        student_objects[i].display_data()

