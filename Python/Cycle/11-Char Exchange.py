# Program to exchange first and last characters in a string

str1=input("Enter a string: ")
len=len(str1)
tmp1=str1[0]
tmp2=str1[len-1]
str2=''
for i in range(1,len-1):
    str2=str2+str1[i]
str3=tmp2+str2+tmp1
print(str3)