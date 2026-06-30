from cs50 import get_int

while True:
    n = get_int("Height: ")
    if n > 0:
        break

for i in range(n):
    print("#")

while True:
    r = get_int("Width: ")
    if r > 0:
        print("?" * r)
        break

