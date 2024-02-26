class MyClass:
    def __init__(self, n=0):
        self.x = n
    
    def get_x(self):
        return self.x

# Creating objects with and without arguments
one = MyClass()
two = MyClass(5)

# Displaying the results
print("one.x = ", one.get_x())
print("two.x = ", two.get_x())