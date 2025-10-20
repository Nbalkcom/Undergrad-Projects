# -*- coding: utf-8 -*-
"""
Created on Tue Sep 29 15:10:36 2020

@author: Nbalk
"""
import re

text = input('Enter a sentence: ')
tokens = re.sub(r'\s+', ' ', text)
print(tokens)