# Fibonacci series of N terms

def fibonacci(n):
    if n==1:
        return 0
    if n==2:
        return 1
    return fibonacci(n-1)+fibonacci(n-2)
    
n=int(input("Enter the number of terms for the sequence: "))
for i in range(1,n+1):
    print(fibonacci(i),end =' ')