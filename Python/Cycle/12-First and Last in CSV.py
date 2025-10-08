# Display first and last colours from a list of comma-separated colour names

str1=input("Enter a list of color names separated by commas: ")
clrArr=[item.strip() for item in str1.split(",")]
print("The first and last colours from the given list are %s and %s respectively" %(clrArr[0],clrArr[len(clrArr)-1]))