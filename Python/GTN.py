# -*- coding: utf-8 -*-
"""
Created on Sun Aug 30 21:57:06 2020

@author: Nbalk
"""

import random
num = random.randrange(1,1001);
guesses = 0;
def newGame():
    num = random.randrange(1,1001);
    guesses = 0;
    return num, guesses


def GTN(num,guesses):
    print("Guess my number between 1 and 1000 with the fewest guesses")
    guess = int(input())
    if num > guess:
        guesses = guesses+ 1
        print("Too low. Try again. Guesses: ", guesses)
        GTN(num,guesses)
    elif num < guess:
        guesses = guesses + 1
        print("Too high. Try again. Guesses: ", guesses)
        GTN(num,guesses)
    elif num == guess:
        guesses = guesses + 1
        print("Congratulations. You guessed the number! Guesses: ", guesses)
        print("Would you like to play again?('Y' or 'N')")
        GA = input()
        if GA == "Y":
            newGame()
            GTN(num,guesses)
        elif GA == "N":
            print("Thanks for playing!")
        else:
            print("Error: Invalid Input! Stopping program...")
    else:
        print("Invalid number!")
        GTN(num,guesses)

GTN(num,guesses);

        