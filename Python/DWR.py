# -*- coding: utf-8 -*-
"""
Created on Sun Sep 13 17:59:09 2020

@author: Nbalk
"""

def unique_words (words):
    notDup = set(i.lower() for i in words)
    
    print(sorted(notDup))
    

b = 'Abc abc cba Dba acb cBa'

unique_words(b.split())