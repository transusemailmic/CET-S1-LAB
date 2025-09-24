# Count the occurrences of each word in a line of text.

str=input("Enter a line of text: ")
x=str.split()
num={}
for item in x:
    num[item]=0
for item in num:
    i=0
    for item2 in x:
        if item==item2:
            i=i+1
    num[item]=i
print("The entered text contains the words as follows")
for item in num:
    print("Item: %s, appeared %d time" %(item,num[item]))