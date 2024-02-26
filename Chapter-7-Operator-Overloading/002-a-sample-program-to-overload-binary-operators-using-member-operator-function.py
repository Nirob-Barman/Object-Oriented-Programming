class Complex:
    def __init__(self, r=0, i=0):
        self.real_part = r
        self.imaginary_part = i

    def __add__(self, other):
        result = Complex()
        result.real_part = self.real_part + other.real_part
        result.imaginary_part = self.imaginary_part + other.imaginary_part
        return result
    
    # def display_complex(self):
    #     print(f'{self.real_part} + {self.imaginary_part}i')

def display_complex(C):
    print(f'{C.real_part} + {C.imaginary_part}i')

if __name__ == '__main__':

    C1 = Complex(2.5, 3.5)
    C2 = Complex(1.6, 2.7)

    C3 = C1 + C2

    # C1.display_complex() # 2.5 + 3.5i
    display_complex(C1) # 2.5 + 3.5i
    # C2.display_complex() # 1.6 + 2.7i
    display_complex(C2) # 1.6 + 2.7i
    print('..........')
    # C3.display_complex() # 3.1 + 5.2i
    display_complex(C3) # 3.1 + 5.2i
