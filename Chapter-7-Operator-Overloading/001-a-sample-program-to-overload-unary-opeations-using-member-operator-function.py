class Item:
    def __init__(self):
        self.a = 0
        self.b = 0
    
    def get_data(self, x, y):
        self.a = x
        self.b = y
    
    def put_data(self):
        print(f'{self.a} \n {self.b}')

    def __neg__(self):
        self.a = -self.a
        self.b = -self.b
    
if __name__ == '__main__':
    obj = Item()
    obj.get_data(10, -20)
    print("Without operator overloading:")
    obj.put_data() # Output: 10 -20

    print("With operator overloading:")
    -obj
    obj.put_data() # Output: -10 20