class XYZ:
    def __init__(self):
        self.x = 0

    def set_value(self, value):
        self.x = value

class ABC:
    def __init__(self):
        self.a = 0

    def set_value(self, value):
        self.a = value

def max_value(m, n):
    if m.x > n.a:
        print("The max value is ", m.x)
    else:
        print("The max value is ", n.a)

if __name__ == '__main__':
    abc = ABC()
    abc.set_value(10)

    xyz = XYZ()
    xyz.set_value(20)

    max_value(xyz, abc)
