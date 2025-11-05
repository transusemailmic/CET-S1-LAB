# Copy odd lines of one file to another
cont=''    
with open("27-SubFile.txt","r") as file1:
    cont=file1.readlines()

with open("27-SubFile2.txt","a") as file2:
    for i in range(0,len(cont),2):  
        file2.write(cont[i])