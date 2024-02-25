class SetFunction:
    def __init__(self):
        self.m = 0
        self.n = 0

    def largest(self):
        if self.m > self.n:
            return self.m
        else:
            return self.n
    
    def input_values(self):
        print("Input values of m and n")
        # self.m = int(input())
        # self.n = int(input())
        self.m, self.n = map(int, input().split())

    def display_result(self):
        print("The largest value is", self.largest())

if __name__ == '__main__':
    # create an object
    obj = SetFunction()
    # Input values of m and n
    obj.input_values()
    # Display the largest value
    obj.display_result()