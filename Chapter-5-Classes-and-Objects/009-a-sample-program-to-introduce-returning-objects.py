class ComplexNumber:
    def __init__(self):
        self.x = 0.0 # real part
        self.y = 0.0 # imaginary part
    
    def input(self, real, imaginary):
        self.x = real
        self.y = imaginary
    
    def show_complex_number(self):
        # print(f'{self.x} + {self.y}i')
        print(f"{self.x} + {self.y:.2f}i")

def add(c1, c2):
    result = ComplexNumber()
    result.x = c1.x + c2.x
    result.y = c1.y + c2.y
    return result

if __name__ == '__main__':
    A = ComplexNumber()
    B = ComplexNumber()
    C = ComplexNumber()

    A.input(3.1, 5.65)
    B.input(2.75, 1.2)

    C = add(A, B)
    print("A = ", end="")
    A.show_complex_number()
    print("B = ", end="")
    B.show_complex_number()
    print("C = ", end="")
    C.show_complex_number()