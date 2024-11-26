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
while change >= 0.25:
    quarters += 1
    change = round(change, 2) - 25

dimes = 0
while change >= 0.10:
    dimes += 1
    change = round(change, 2) - .10

nickels = 0
while change >= 0.05:
    nickels += 1
    change = round(change, 2) - .05

pennies = 0
while change >= 0.01:
    pennies += 1
    change = round(change, 2) - .01

print(quarters + dimes + nickels + pennies)
