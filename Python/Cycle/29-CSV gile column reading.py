# Read specific columns of a given CSV file and print their contents

import csv

with open("29-SubFile.csv", newline="") as file:
    cont=csv.DictReader(file)
    for row in cont:
        print(row["Name"],row["Gender"])