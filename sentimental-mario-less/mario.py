while True:
    height = int(input("Height: "))
        if height > 0 and height <9:
    break
for i in range(height):
    print(f"{' ' * (height - i - 1)}{'#' * (i + 1)}")




