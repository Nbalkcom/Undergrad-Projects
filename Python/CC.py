# -*- coding: utf-8 -*-
"""
Created on Tue Sep 15 23:55:12 2020

@author: Nbalk
"""

print("Write a sentence(no punctuation): ")
text = input()

characters = []

for i in text.lower().split():
    characters.extend(list(i))
    
characterCounts = {}

for x in characters:
    if x in characterCounts:
        characterCounts[x] += 1
    else:
        characterCounts[x] = 1
        
print(f'{"Character":<12}Count')

for character, count in sorted(characterCounts.items()):
    print(f'{character:<12}{count}')
    
import string

uniqueLetters = set(characterCounts.keys()) - set('string.digits')
alphabet = set(string.ascii_lowercase)

print(f'Letters not in your sentence\n {sorted(alphabet - uniqueLetters)}')