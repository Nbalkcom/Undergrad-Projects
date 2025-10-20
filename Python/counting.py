# -*- coding: utf-8 -*-
"""
Created on Tue Aug 25 20:56:06 2020

@author: Nbalk
"""
x = 0;
z = 0;
y = 10000;
x = int(input("Enter a 5-digit number: "));
while 0 < x <= 99999:
    z = x // y;
    print(z);
    x = x - (z * y);
    y = int(y * .1);
    