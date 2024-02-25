class Time:
    def __init__(self):
        self.hours = 0
        self.minutes = 0

    def get_time(self, hour, minute):
        self.hours = hour
        self.minutes = minute

    def show_time(self):
        print(f'{self.hours} hours and {self.minutes} minutes')
    
    def add_time(self, t1, t2):
        self.minutes = t1.minutes + t2.minutes
        self.hours = self.minutes // 60
        self.minutes = self.minutes % 60
        self.hours += t1.hours + t2.hours

if __name__ == '__main__':
    one = Time()
    two = Time()
    three = Time()

    one.get_time(2, 45)
    two.get_time(3, 30)

    three.add_time(one,two)
    print("First Time: ")
    one.show_time()
    print("Second Time: ")
    two.show_time()
    print("Third Time: ")
    three.show_time()