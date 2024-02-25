class Sample:
    def __init__(self):
        self.a = 0
        self.b = 0

    def set_value(self, a, b):
        self.a = a
        self.b = b
    
def mean(s):
    return float(s.a + s.b) / 2.0

if __name__ == '__main__':
    X = Sample() # Create an object
    X.set_value(1, 2)
    # print(mean(X))
    print("Mean Value: ", mean(X))