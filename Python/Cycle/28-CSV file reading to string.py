# Read each row from a given csv file and print it as a list of strings

import csv

with open('28-SubFile.csv', newline='') as file:
    cont=csv.reader(file)
    for row in cont:
        print(row)