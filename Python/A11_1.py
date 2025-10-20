# -*- coding: utf-8 -*-
"""
Created on Tue Nov  3 11:27:59 2020

@author: Nbalk
"""

from textblob import TextBlob
text = 'This is a sentence. This is another sentence.'
blob = TextBlob(text)
print(blob)
print(blob.sentences)
print(blob.words)
print(blob.tags)
print(blob.noun_phrases)
print(blob.sentiment)
print(blob.detect_language())
spanish = blob.translate(to = 'es')
print(spanish)
french = blob.translate(to='fr')
print(french)
animals = TextBlob('dogs geese sheep zebras').words
print(animals.singularize())
mispelled = TextBlob('Misppelled wodrs are harrd to type.')
print(mispelled.correct())

from textblob import Word
plural = Word('cherries')
print(plural.stem())
print(plural.lemmatize())
program = Word('program')
print(program.definitions)
print(program.synsets)