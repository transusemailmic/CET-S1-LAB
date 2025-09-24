# Program to find factorial of n numbers

n=int(input("Enter the number to find factorial: "))
f=1
for i in range(1,n+1):
    f=f*i
print("Factorial of %d is %d" %(n,f))