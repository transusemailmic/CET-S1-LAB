# Sort dictionary (ascending and descending)

dict1={1:"Apple",8:"Mango",3:"Papaya",5:"Grapes",20:"Pineapple",7:"Guava"}
print("Dictionary before sorting")
print(dict1)
dictAsc={}
dictDsc={}
keysArrAsc=sorted(dict1.keys())
for key in keysArrAsc:
    dictAsc[key]=dict1[key]
keysArrDsc=sorted(dict1.keys(),reverse=True)
for key in keysArrDsc:
    dictDsc[key]=dict1[key]
print("Dictionary after sorting in Ascending order")
print(dictAsc)
print("Dictionary after sorting in Descending order")
print(dictDsc)