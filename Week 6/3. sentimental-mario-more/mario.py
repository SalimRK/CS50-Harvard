# TODO
from cs50 import get_int

# get input from user until input is correct
while True:
    try:
        height = get_int("Height: ")
        if (height >= 1) and (height <= 8):
            break
    except:
        print("", end="")

for row in range(height):
    for space in range(height - row - 1, 0, -1):
        print(" ", end="")
    # print the left hashes
    for left_hash in range(row + 1):
        print("#", end="")
    # Print the middle seperation spaces
    print("  ", end="")
    # print the right hashes
    for right_hash in range(row + 1):
        print("#", end="")
    print()