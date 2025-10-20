# -*- coding: utf-8 -*-
"""
Created on Sun Aug 30 23:22:49 2020

@author: Nbalk
"""

def product(*args):
    product = 1
    for value in args:
        product *= value
    print(product)
    return product
a = 1,2,3,4,5,6,7,8,9
b = 2,4,6,8,10
c = 1,3,5,7,9
d = 30,2,4
e = 13,7

product(*a)
product(*b)
product(*c)
product(*d)
product(*e)