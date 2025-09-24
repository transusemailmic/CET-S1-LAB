# Program to generate first n multiples of a number

n=int(input("Enter the number to find multiples of: "))
m=int(input("Enter upto which multiple to generate: "))
for i in range(1,m+1):
    print("%d x %d = %d" %(i,n,i*n))