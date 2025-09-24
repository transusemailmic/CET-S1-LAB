# Program to find the sum of first 100 even numbers

s=0
i=0
c=0
while(1):
    c=c+2
    s=s+c
    i=i+1
    if(i==100):
        break
print("Sum of first 100 even numbers is %d" %(s))