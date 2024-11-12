height = int(input("Height: "))


while height > 0 or height < 9:
    for i in range(height):
        print(f"{' ' * (height - i - 1)}{'#' * (i + 1)}")


