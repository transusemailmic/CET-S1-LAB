# Factorial using function

def factorial(n):
    if n==0:
        return 1
    return n*factorial(n-1)

n=int(input("Input the number to find the factorial: "))
print("Factorial of %d is %d" %(n,factorial(n)))