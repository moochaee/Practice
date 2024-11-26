from cs50 import get_string

text = input("Text: ")

letters = 0
for letter in text:
    if letter.isalpha():
        letters += 1

words = 1
for letter in text:
    if letter == " ":
        words += 1

sentences = 0
for letter in text:
    if letter == "." or letter == "!" or letter == "?":
        sentences += 1
