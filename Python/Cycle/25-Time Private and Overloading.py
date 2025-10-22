# Private attributes and Overloading

class Time:
    def __init__(self,hour,minute,second):
        self.hour=hour
        self.minute=minute
        self.second=second
    def __str__(self):
        return "Time: %02d:%02d:%02d" %(self.hour,self.minute,self.second)

tim=Time(12,1,23)
print(tim)