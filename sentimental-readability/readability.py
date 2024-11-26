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

L = round(((letters/words) *100), 2)
S = round(((sentences/words) *100), 2)

CLS = round(0.0588 * L - 0.296 * S - 15.8, 2)

