class A:
    def __init__(self, _a=10, _b=10):
        print("Constructing Object.......")
        self.a = _a
        self.b = _b

    def __del__(self):
        print("Destructing Object.......")

# Creating global object
ob = A() # Constructing Object

if __name__ == '__main__':
    # Creating objects
    obj1 = A() # Constructing Object
    obj2 = A(10, 10) # Constructing Object
    print(".......")

    # Creating a local object
    obj3 = A() # Constructing Object
    print("Local Object")
    print(".......")

    # Destructing objects
    # Destructing objects
    # Destructing objects
    # Destructing objects