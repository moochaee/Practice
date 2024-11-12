height = int(input("Height: "))

try:
    return int(input(promt))
except:
    height = int(input("Height: "))

if height < 1 or height > 8:
    height = int(input("Height: "))


for i in range(height):
    print(f"{' ' * (height - i - 1)}{'#' * (i + 1)}")

