from cs50 import get_float



while True:
    try:
        # get user input for change
        change = get_float("Change: ")
        #check that it is a non-negative integer
        if change > 0.00:
            break
    except ValueError:
        pass

quarters = 0
for quarter in quarters
while change >= 0.25:
    quarters =+ quarters
    change = change - .25

