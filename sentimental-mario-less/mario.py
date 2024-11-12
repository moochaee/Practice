height = int(input("Height: "))


while height > 0 and height < 9:
    for i in range(height):
        print(f"{' ' * (height - i - 1)}{'#' * (i + 1)}")


