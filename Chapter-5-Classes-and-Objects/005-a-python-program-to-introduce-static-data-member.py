class Item:
    counts = 0

    def __init__(self):
        self.number = 0
    
    def get_data(self, number):
        self.number = number
        Item.counts += 1
    
    def get_count(self):
        print("Count: ", Item.counts)

if __name__ == '__main__':
    a = Item()
    b = Item()
    c = Item()
    
    # Display initial count
    a.get_count()
    b.get_count()
    c.get_count()

    # Set data for objects
    a.get_data(100)
    b.get_data(200)
    c.get_data(300)

    print('After setting data:')
    # Display updated count
    a.get_count()
    b.get_count()
    c.get_count()