# -*- coding: utf-8 -*-
"""
Created on Tue Sep 29 14:04:49 2020

@author: Nbalk
"""

text = input('Enter a sentence: ')
rtext = ' '.join(reversed(text.split()))  
print(rtext)
    