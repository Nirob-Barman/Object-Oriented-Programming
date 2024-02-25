class MyClass:
    def __init__(self):
        # private member variable a
        self.a = 0
    
    def set_a(self, a):
        self.a = a

    def get_a(self):
        return self.a
    
# Create object objectOne and objectTwo
objectOne = MyClass()
objectTwo = MyClass()

# Set Values for a in objectOne and objectTwo
objectOne.set_a(10)
objectTwo.set_a(20)

# Display the values of a in objectOne and objectTwo
print(objectOne.get_a())
print(objectTwo.get_a())