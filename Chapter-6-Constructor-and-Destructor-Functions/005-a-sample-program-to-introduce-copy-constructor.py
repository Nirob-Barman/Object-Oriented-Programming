# To implement a copy constructor, 
# you can use the __init__ method with a different parameter name 
# and assign the values accordingly
class Code:
    def __init__(self, a=0):
        self.id = a
    
    # Copy constructor
    def copy_constructor(self, obj):
        self.id = obj.id
    
    def display_code(self):
        print(self.id)
    
# Creating objects and demonstrating the copy constructor
A = Code(100)
B = Code() # Creating an empty object
B.copy_constructor(A)
C = Code() # Creating another empty object
C.copy_constructor(A)

# Displaying the results
print("Id of A = ", end="")
A.display_code() # 100
print("Id of B = ", end="")
B.display_code() # 100
print("Id of C = ", end="")
C.display_code() # 100