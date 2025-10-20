# -*- coding: utf-8 -*-
"""
Created on Tue Oct 20 21:28:36 2020

@author: Nbalk
"""

from decimal import Decimal

class Invoice:
    
    def __init__(self, partN,partD, quantity, ppItem):
        self.partN = partN
        self.partD = partD
        self.quantity = quantity
        self.ppItem = ppItem
    
    #Part Number Methods
    @property
    def partN(self):
        return self._partN
    @partN.setter
    def partN(self,partN):
        self._partN = partN
    
    #Part Description Methods
    @property
    def partD(self):
        return self._partD
    @partD.setter
    def partD(self, partD):
        self._partD = partD
    
    #Quantity Methods
    @property
    def quantity(self):
        return self._quantity
    @quantity.setter
    def quantity(self, quantity):
        if not (quantity >= 0):
            raise ValueError(f'Quantity ({quantity}) must be greater than or equal to 0')
        else:
            self._quantity = quantity
    
    #Price per Item Methods
    @property
    def ppItem(self):
        return self._ppItem
    @ppItem.setter
    def ppItem(self, ppItem):
        if not(ppItem >= Decimal('0.00')):
            raise ValueError(f'Price per Item ({ppItem}) must be greater than or equal to 0.00')
        else:
            self._ppItem = ppItem
    
    #Calculate Invoice Method
    def calculate_invoice(self):
        return self._quantity * self._ppItem
        