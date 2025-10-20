# -*- coding: utf-8 -*-
"""
Created on Wed Sep  9 10:14:52 2020

@author: Nbalk
"""

alphabet = 'abcdefghijklmnopqrstuvwxyz'

def summarize_letters(string):
    letters = []
    counts = []
    
    for x in string.lower():
        if x in alphabet:
            if x in letters:
                index = letters.index(x)
                counts[index] += 1
            else:
                letters.append(x)
                counts.append(1)
            
    tuples = list(zip(letters, counts))
    tuples.sort()
    return tuples

a = 'Nick Balkcom'
s = summarize_letters(a)

for char,count in s:
    print(f'{char}: {count}')
    
all_letters = True

if len(s) == len(alphabet):
    for i in s:
        if i[0] not in alphabet:
            all_letters = False
            break
else:
    all_letters = False
            
if all_letters:
    print('This string has all the letters of the alphabet')
else:
    print('This string does not have all the letters of the alphabet')