while True:
    try:
        height = int(input("Height: "))
        if height > 0 and height < 9:
            break
        for i in range(height):
    print(f"{' ' * (height - i - 1)}{'#' * (i + 1)}")

    except ValueError:
        print("Invalid input. Please enter an integer.")

