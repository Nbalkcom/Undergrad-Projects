# -*- coding: utf-8 -*-
"""
Created on Wed Sep 23 01:45:19 2020

@author: Nbalk
"""

import pandas as pd
import numpy as np

print('The first Series:')
a = pd.Series([7,11,13,17])
print(a)

print('\nThe second Series:')
b = pd.Series(100.0, range(5))
print(b)

print('\nThe third Series:')
randomNum = np.random.randint(0,101,20)
c = pd.Series(randomNum)
print(c)

print('\nThe fourth Series:')
d = pd.Series([98.6,98.9,100.2,97.7], index=['Julie','Charlie','Sam','Andrea'])
print(d)

print('\nThe fifth Series:')
dictE = {'Julie': 98.6,'Charlie': 98.9,'Sam': 100.2,'Andrea': 97.7}
e = pd.Series(dictE)
print(e)