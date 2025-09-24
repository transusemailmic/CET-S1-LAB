# Program to find whether a year is leap year or not

y=int(input("Enter a year: "))
if y%400==0 or y%4==0 and y%100!=0:
    print("%d is a leap year" %(y))
else:
    print("%d is not a leap year" %(y))