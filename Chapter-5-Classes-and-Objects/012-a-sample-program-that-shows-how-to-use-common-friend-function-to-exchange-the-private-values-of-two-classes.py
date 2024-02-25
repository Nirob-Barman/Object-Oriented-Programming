class Class2:
    def __init__(self):
        self.value = 0
    
    def input_data(self, a):
        self.value = a
    
    def display_data(self):
        print(self.value)
    
class Class1:
    def __init__(self):
        self.value = 0
    
    def input_data(self, a):
        self.value = a
    
    def display_data(self):
        print(self.value)

def exchange_value(x, y):
    temp = x.value
    x.value = y.value
    y.value = temp

if __name__ == '__main__':
    C1 = Class1()
    C2 = Class2()

    C1.input_data(100)
    C2.input_data(200)

    print("Values before exchange")
    C1.display_data()
    C2.display_data()

    exchange_value(C1, C2) # Swap the values

    print("Values after exchange")
    C1.display_data()
    C2.display_data()