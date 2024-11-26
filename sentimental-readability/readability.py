from cs50 import get_string

text = input("Text: ")

letters = 0
for letter in text:
    if text.isalpha():
        letters += 1

words = 0
for word in text:
    if text[word] = " ":
        words += 1

