class Employee:
    def __init__(self):
        self.name = ''
        self.age = 0.0
    
    def get_data(self):
        self.name = input('Enter employee name: ')
        self.age = float(input('Enter employee age: '))
    
    def put_data(self):
        print("Name: ", self.name)
        print("Age: ", self.age)
    
array_size = 2

if __name__ == '__main__':
    managers = [
        Employee()
        for _ in range(array_size)
    ]

    for i in range(array_size):
        print(f'\nDetails of Manager {i+1}:')
        managers[i].get_data()
    for i in range(array_size):
        print(f'\nManager {i+1}:')
        managers[i].put_data()