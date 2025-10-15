# From a list, create a list removing all even numbers

str1=input("Enter a list of numbers: ")
strArr=[int(item) for item in str1.split(" ")]
print("Input List of numbers")
print(strArr)
strOddArr=[]
for item in strArr:
    if item%2!=0:
        strOddArr.append(item)
print("List with only odd numbers")
print(strOddArr)