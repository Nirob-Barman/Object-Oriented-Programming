class IntegerNumber:
    def __init__(self, x, y):
        self.m = x
        self.n = y
    
    def display_integer_number(self):
        print(f'm = {self.m} and n = {self.n}')
    
# Create an object of the class
obj = IntegerNumber(10, 20)
obj.display_integer_number()