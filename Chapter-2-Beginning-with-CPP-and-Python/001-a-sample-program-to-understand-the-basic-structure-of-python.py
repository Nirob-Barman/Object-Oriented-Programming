class Employee:
    def __init__(self):
        self.employee_name = ""
        self.employee_number = 0
    def get_value(self):
        self.employee_name = input('Enter employee name: ')
        self.employee_number = int(input('Enter employee number: '))
    def display_value(self):
        print('Employee name: ', self.employee_name)
        print('Employee number: ', self.employee_number)

if __name__ == '__main__':
    # Create an object
    employee_object = Employee()

    # Get values and display them
    employee_object.get_value()
    employee_object.display_value()