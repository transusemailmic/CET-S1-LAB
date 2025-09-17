#Leap Year Generator
def leap(s1,s2):
    for i in range(s1,s2+1):
        if i%400==0 or i%4==0 and i%100!=0:  
            print(i,"\n")
s1=int(input("Enter the start year: "))
s2=int(input("Enter the end year: "))
print("The Leap Years between %d and %d are " %(s1,s2))
leap(s1,s2)