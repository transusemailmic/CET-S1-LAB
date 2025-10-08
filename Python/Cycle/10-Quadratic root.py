# Program to find roots of a quadratic equation

import math
a=int(input("Enter the coefficient of a: "))
b=int(input("Enter the coefficient of b: "))
c=int(input("Enter the coefficient of c: "))
d=b**2-4*a*c
if d>0:
    r1=(-b+math.sqrt(d))/(2*a)
    r2=(-b-math.sqrt(d))/(2*a)
    print("The equation has real and distinct roots.\nThe roots are %f and %f" %(r1,r2))
elif d==0:
    r=(-b+math.sqrt(d))/(2*a)
    print("The equation has real and equal roots.\nThe roots are %f and %f" %(r,r))
else:
    ra=-b/2*a
    rb=math.sqrt(abs(d))/(2*a)
    r1=str(ra)+" + "+str(rb)+"i"
    r2=str(ra)+" - "+str(rb)+"i"
    print("The equation has imaginary and distinct roots.\nThe roots are %s and %s" %(r1,r2))
    