# List ordinal value of each element of a word

string=input("Enter a word: ")
arr=[]
for ch in string:
    arr.append(ord(ch))
print("The Ordinal values in the word are : ")
for item in arr:
    print(item,end=" ")