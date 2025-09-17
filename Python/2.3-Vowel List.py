#Form a list of vowels selected from a given word

string=input("Enter a word: ")
arr=[]
for ch in string:
    if ch in ['a','e','i','o','u']:
        arr.append(ch)
print("The vowels in the word are : ")
for item in arr:
    print(item,end=" ")