class A:
    def __init__(self, _a=10, _b=10):
        print("Constructing Object.......")
        self.a = _a
        self.b = _b

    def __del__(self):
        print("Destructing Object.......")

# Creating global object
ob = A()

if __name__ == '__main__':
    # Creating objects
    obj1 = A()
    obj2 = A(10, 10)
    print("\n.......")

    # Creating a local object
    obj3 = A()
    print("Local Object")
    print(".......\n")