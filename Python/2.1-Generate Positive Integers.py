#Generate positive list of numbers from a given list of integers

integer = []
n=int(input("Enter the number of integers: "))
print("Enter the integer numbers: ")
for i in range(0,n):
    num=int(input())
    integer.append(num)
print("The positive integers in the list are: ")
for num in integer:
    if num>=0:
        print(num,end=" ")