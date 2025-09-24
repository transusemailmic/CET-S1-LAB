# Program to swap two numbers

a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))
print("Before swapping the value of a is %d and value of b is %d" %(a,b))
a=a+b
b=a-b
a=a-b
print("After swapping the value of a is %d and value of b is %d" %(a,b))