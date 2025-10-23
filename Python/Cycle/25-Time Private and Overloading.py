# Private attributes and Overloading

class Time:
    def __init__(self,hour,minute,second):
        self.__hour=hour
        self.__minute=minute
        self.__second=second
    def __add__(self,other):
        s=self.__second+other.__second
        m=self.__minute+other.__minute
        h=(self.__hour+other.__hour)%24
        if s>60:
            s=s%60
            m=m+1
        if m>60:
            m=m%60
            h=h+1
        return Time(h,m,s)    
        
    def __str__(self):
        return "Time: %02d:%02d:%02d" %(self.__hour,self.__minute,self.__second)

tim1=Time(12,1,23)
tim2=Time(1,2,4)
print(tim1+tim2)