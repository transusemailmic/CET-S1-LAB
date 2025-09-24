# Program to find the largest of 3 numbers

a=int(input("Enter number 1: "))
b=int(input("Enter number 2: "))
c=int(input("Enter number 3: "))
if(a>b):
    if(a>c):
        print("%d is largest" %(a))
    else:
        print("%d is largest" %(c))
else:
    if(b>c):
        print("%d is largest" %(b))
    else:
        print("%d is largest" %(c))