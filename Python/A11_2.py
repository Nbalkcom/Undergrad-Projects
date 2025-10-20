# -*- coding: utf-8 -*-
"""
Created on Tue Nov  3 11:04:30 2020

@author: Nbalk
"""

from textblob import TextBlob
from nltk.corpus import stopwords
stops = stopwords.words('english')

#2A Task
import requests
response = requests.get('https://www.mga.edu/news/mga-makes-2021-usnews-rankings.php')
response.content  # gives back the page's HTML
from bs4 import BeautifulSoup
soup = BeautifulSoup(response.content, 'html5lib')
# kill all script and style elements
for script in soup(["script", "style"]):
    script.extract()    # rip it out
text = soup.get_text(strip=True)  # text without tags

#2B Task
blob = TextBlob(text)
stoppedText = ''
for word in blob.words:
    if word not in stops:
        stoppedText += (word + ' ')
print('List of text without stopwords: ')
print(stoppedText)
        
#2C Task
from wordcloud import WordCloud
wordcloud = WordCloud()
wordcloud = wordcloud.generate(text)
wordcloud = wordcloud.to_file('WordCloud.png')
print('\nWordCloud created')

#2D Task
print('\nEntire Text Sentiment: ')
print(blob.sentiment)
for sentence in blob.sentences:
    print('\nSentence Sentiment: ')
    print(sentence.sentiment)