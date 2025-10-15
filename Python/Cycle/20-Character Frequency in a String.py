# Character Frequency in a string

str1=input("Enter a string: ")
dict1={}
for i in str1:
    count=0
    for j in str1:
        if i==j:
            count=count+1
    dict1[i]=count
for key,item in dict1.items():
    print("%s appears %d times" %(key,item))