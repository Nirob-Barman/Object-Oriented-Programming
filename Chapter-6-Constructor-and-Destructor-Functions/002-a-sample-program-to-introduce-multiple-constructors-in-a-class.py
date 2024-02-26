# The Python code mirrors this structure with the __init__ method, 
# which serves as the constructor in Python. 
# The default values are provided for parameters to achieve the behavior of multiple constructors.
class ComplexNumber:
    def __init__(self, real=0.0, imaginary=0.0):
        self.x = real # real part
        self.y = imaginary # imaginary part

def add_complex_numbers(one, two):
    add = ComplexNumber()
    add.x = one.x + two.x
    add.y = one.y + two.y
    return add

def show_complex_number(c):
    print(f"{c.x} + {c.y:.2f}i")

# Creating complex numbers
one = ComplexNumber(3.1, 5.65)
two = ComplexNumber(1.6)

# Adding two complex numbers
C = add_complex_numbers(one, two)

# Displaying the result
print("A = ", end="")
show_complex_number(one) # 3.1 + 5.65i
print("B = ", end="")
show_complex_number(two) # 1.6 + 0.00i
print("C = ", end="")
show_complex_number(C) # 5.7 + 5.65i