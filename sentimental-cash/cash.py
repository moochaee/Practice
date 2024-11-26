from cs50 import get_float

while True:
    try:
        change = get_float("Change: ")
        if change > 0.00:
            break
    except ValueError:



