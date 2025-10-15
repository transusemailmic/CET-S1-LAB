# Pattern Generation

n=int(input("Enter the limit: "))
print("Left Skewed Triangle")
for i in range(1,n):
        print("*"*i)
print("Centered Triangle")
for i in range(1,n):
    print(" "*(n-i)+"*"*(2*i-1))
print("Right Skewed Triangle")
for i in range(1,n):
    print(" "*(n-i)+"*"*i)
print("Bottom Left Skewed Triangle")
for i in range(n,0,-1):
        print("*"*i)
print("Bottom Centered Triangle")
for i in range(n,0,-1):
    print(" "*(n-i)+"*"*(2*i-1))
print("Bottom Right Skewed Triangle")
for i in range(n,0,-1):
    print(" "*(n-i)+"*"*i)