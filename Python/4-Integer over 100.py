# Prompt the user for a list of integers. For all values greater than 100, store ‘over’ instead. 

str=input("Enter a list of numbers: ")
ov="Over"
str_arr=str.split()
num=[int(x) for x in str_arr]
for i in range(len(num)):
    if num[i]>=100:
        num[i]=ov
for item in num:
    print(item, end=" ")