# -*- coding: utf-8 -*-
"""
Created on Tue Oct 13 15:06:39 2020

@author: Nbalk
"""

import csv

# Assignment 8.2  
i = 1 
with open('grades.csv', mode = 'w', newline = '') as grades:
        writer = csv.writer(grades)  
        while i > 0:
            fname = input('Enter student first name: ')
            lname = input('Enter student last name: ')
            e1grade = int(input('Enter student first grade: '))
            e2grade = int(input('Enter student second grade: '))
            e3grade = int(input('Enter student third grade: '))
            writer.writerow([fname,lname,e1grade,e2grade,e3grade])
            i = int(input('Enter new record? (1 to continue, -1 to stop):'))

#Assignment 8.3
with open('grades.csv', 'r', newline = '') as grades:
    print(f'{"First Name":<12}{"Last name":<12}{"Exam 1":>7}{"Exam 2":>7}{"Exam 3":>7}')
    reader = csv.reader(grades)
    for record in reader:
        fname,lname,e1grade,e2grade,e3grade = record
        print(f'{fname:<12}{lname:<12}{e1grade:>7}{e2grade:>7}{e3grade:>7}')

#Assignment 8.4
print('\nClass Grade Report')
with open('grades.csv', 'r', newline = '') as grades:
    print(f'{"First Name":<12}{"Last name":<12}{"Exam 1":>7}{"Exam 2":>7}{"Exam 3":>7}{"Average":>8}')
    reader = csv.reader(grades)
    e1total = 0
    e2total = 0
    e3total = 0
    students = 0
    for record in reader:
        fname,lname,e1grade,e2grade,e3grade = record
        e1grade, e2grade,e3grade = int(e1grade), int(e2grade), int(e3grade)
        e1total += e1grade
        e2total += e2grade
        e3total += e3grade
        average = (e1grade + e2grade + e3grade) / 3
        print(f'{fname:<12}{lname:<12}{e1grade:>7}{e2grade:>7}{e3grade:>7} {average:>7.2f}')
        students += 1
    e1average = e1total/students
    e2average = e2total/students
    e3average = e3total/students
    print(f'{"Class":>12}{" Average":<12}{e1average:>7.2f}{e2average:>7.2f}{e3average:>7.2f}')