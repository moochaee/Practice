from cs50 import get_string

text = input("Text: ")

letters = 0
for letter in text:
    if letter.isalpha():
        letters += 1

words = 0
for word in text:
    if text[word] = " ":
        words += 1

sentences = 0
for sentence in text:
    if text[sentence] = "." or text[sentence] = "!" or text[sentence] = "?":
        sentence += 1
