# -*- coding: utf-8 -*-
"""
Created on Tue Oct 20 23:37:41 2020

@author: Nbalk
"""

from invoiceClass import Invoice
from decimal import Decimal

invoice1 = Invoice('P100', 'Screwdriver', 2, Decimal('3.00'))
invoice2 = Invoice('P250', 'Hammer', 5, Decimal('3.50'))
invoice3 = Invoice('P300', 'Power Drill', 1, Decimal('25.00'))
invoiceList = [invoice1,invoice2,invoice3]

print(f'{"Part Number":<15}{"Part Description":<20}{"Quantity":<9}{"Price":<6}{"Invoice Amount":<12}')
for invoice in invoiceList:
    pN = invoice.partN
    pD = invoice.partD
    q = invoice.quantity
    ppI = invoice.ppItem
    amount = invoice.calculate_invoice()
    
    print(f'{pN:<15}{pD:<20}{q:<9}{ppI:<6}{amount:>12}')
    