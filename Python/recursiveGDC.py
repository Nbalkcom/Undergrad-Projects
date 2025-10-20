# -*- coding: utf-8 -*-
"""
Created on Tue Oct 27 22:31:13 2020

@author: Nbalk
"""

def gdc(x,y):
    if y == 0:
        return x
    else:
        return gdc(y,x % y)
    
a = int(input("Enter the first number for GDC calculation: "))
b = int(input("Enter the second number for GDC calculation: "))

g = gdc(a,b)
print(f'Your first number ({a}) and your second number ({b}) has a GDC of {g}')