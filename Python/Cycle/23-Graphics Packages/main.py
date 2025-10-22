#Packages in Python

import fl_graphics.circle
import fl_graphics.rect

r=int(input("Enter the radius of the circle: "))
print("Area of circle is %f and Perimeter is %f" %(fl_graphics.circle.carea(r),fl_graphics.circle.cperi(r)))
l=int(input("Enter the length of the rectangle: "))
b=int(input("Enter the breadth of the rectangle: "))
print("Area of rectangle is %d and Perimeter is %d" %(fl_graphics.rect.rarea(l,b),fl_graphics.rect.rperi(l,b)))

