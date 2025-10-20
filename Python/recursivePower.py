# -*- coding: utf-8 -*-
"""
Created on Tue Oct 27 22:15:09 2020

@author: Nbalk
"""

def power(base,exponent):
    if exponent == 1:
        return base
    else:
        return base * power(base,exponent - 1)
    
b = int(input("Enter the base for your exponential calculation: "))
e = int(input("Enter the exponent of your exponential calculation: "))

if e <= 0:
    print("Your exponent is too low to be calculated. Should be at least equal to 1!")
else:
    p = power(b,e)
    print(f'Your base ({b}) up to the ({e}) power is equal to {p}')