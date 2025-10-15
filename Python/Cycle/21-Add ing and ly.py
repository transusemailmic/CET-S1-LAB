# Add ‘ing’ at the end of a given string. If it already ends with ‘ing’, add ‘ly’

str1=input("Enter a string: ")
str2=''
end=len(str1)-3
if len(str1)>=3:
    for i in range(end,len(str1)):
        str2=str2+str1[i]
    if str2=="ing":
        str1=str1+"ly"
    else:
        str1=str1+"ing"
else:
    str1=str1+"ing"
print(str1)