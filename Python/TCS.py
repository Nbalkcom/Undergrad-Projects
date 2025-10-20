# -*- coding: utf-8 -*-
"""
Created on Tue Sep 29 15:00:27 2020

@author: Nbalk
"""

text = input('Enter a sentence: ')
tokens = text.lower().split(' ')

for i in tokens:
    if i.endswith('ed'):
        print(i)