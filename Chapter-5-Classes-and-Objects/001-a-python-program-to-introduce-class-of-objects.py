class Item:
    def __init__(self):
        # Constructor to initialize the object with default values
        self.number = 0
        self.cost = 0.0

    def get_data(self, a, b):
        # Member function to set the data of the object
        self.number = a
        self.cost = b

    def put_data(self):
        # Member function to display the data of the object
        print("Number:", self.number)
        print("Cost:", self.cost)
    
if __name__ == '__main__':
    # create an object x
    x = Item()
    print("Object x : ")
    x.get_data(100, 299.95)
    x.put_data()

    # crete another object y
    y = Item()
    print("\nObject y : ")
    y.get_data(200, 175.5)
    y.put_data()



# Object x : 
# Number: 100
# Cost: 299.95

# Object y : 
# Number: 200
# Cost: 175.5