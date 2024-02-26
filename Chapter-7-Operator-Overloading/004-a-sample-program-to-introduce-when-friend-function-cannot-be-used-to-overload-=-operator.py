import copy

class CoOrdinate:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __copy__(self):
        return CoOrdinate(self.x, self.y)
    
    def display(self):
        print(self.x, self.y)

if __name__ == '__main__':
    ob1 = CoOrdinate(10, 20)
    ob2 = copy.copy(ob1) # shallow copy
    ob2.display() # 10 20

    ob3 = copy.deepcopy(ob1) # deep copy
    ob3.display() # 10 20