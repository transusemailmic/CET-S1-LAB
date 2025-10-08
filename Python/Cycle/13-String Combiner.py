# Create a single string from two strings, swapping the character at position 1

str1=input("Enter string 1: ")
str2=input("Enter string 2: ")
str3=''
str4=''
for i in range(2,len(str1)):
    str3=str3+str1[i]
for i in range(2,len(str2)):
    str4=str4+str2[i]
str5=str1[0]+str2[1]+str3+str2[0]+str1[1]+str4
print(str5)