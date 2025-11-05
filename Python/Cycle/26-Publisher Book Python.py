# Publisher, Book, Python (Base class constructor invocation, method overriding)

class Publisher:
    def __init__(self, name):
        self.name=name
    def display(self):
        print("Publisher: ",self.name)
        
class Book(Publisher):
    def __init__(self, pubname, title, author):
        super().__init__(pubname)
        self.title=title
        self.author=author
    def display(self):
        print("Title: ",self.title)
        print("Author: ",self.author)
        super().display()
        
class Python(Book):
    def __init__(self, pubname, title, author, price, pagecount):
        super().__init__(pubname, title, author)
        self.price=price
        self.pagecount=pagecount
    def display(self):
        super().display()
        print("Price: ",self.price)
        print("Page Count: ",self.pagecount)

b1=Python("No Starch Press","Automate the Boring Stuff with Python -- Workbook", "Al Sweigart", "$39", "256")
b1.display()