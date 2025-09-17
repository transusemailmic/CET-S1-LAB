#Square of N numbers

integer = []
n=int(input("Enter the number of integers: "))
print("Enter the integer numbers: ")
for i in range(0,n):
    num=int(input())
    integer.append(num)
print("The square of integers in the list are: ")
for num in integer:
    print(num**2,end=" ")