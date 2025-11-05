# Write a Python dictionary to a CSV file, read the CSV and display its conr
import csv

data=[{"Roll No":"1","Name":"Aby","Gender":"M"},{"Roll No":"2","Name":"Bob","Gender":"M"},{"Roll No":"3","Name":"Bini","Gender":"F"}]
headers=data[0].keys()
with open("30-SubFile.csv","w",newline="") as csvFile:
    writer=csv.DictWriter(csvFile,fieldnames=headers)
    writer.writeheader()
    writer.writerows(data)
with open("30-SubFile.csv",newline="") as file:
    cont=csv.reader(file)
    for row in cont:
        print(row)
