# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 00:16:04 2020

@author: Nbalk
"""

def unique(values):
    notDup = []
    
    for i in values:
        if i not in notDup:
            notDup.append(i)
            
    notDup.sort()
    print(notDup)
     
a = [1,2,3,2,3,3,5,5,1]
b = ['abc','cba','cba','bac']
unique(a)
unique(b)