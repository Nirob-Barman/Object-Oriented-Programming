class Test:
    counts = 0  # static data member variable

    def __init__(self):
        self.code = 0
    
    def set_code(self):
        Test.counts += 1
        self.code = Test.counts
    
    def show_code(self):
        print("Object number: ", self.code)
    
    @staticmethod
    def show_count():
        print("Count: ", Test.counts)
    
if __name__ == '__main__':
    # Create object objectOne, objectTwo, objectThree
    objectOne = Test()
    objectTwo = Test()
    objectThree = Test()
    
    # Set values for code in objectOne, objectTwo
    objectOne.set_code()
    objectTwo.set_code()
    
    # Access and display static information
    Test.show_count()

    objectThree.set_code()
    Test.show_count()

    # Display the values of codes for objects
    objectOne.show_code()
    objectTwo.show_code()
    objectThree.show_code()
    
    