def main():
    x = get_int("x: ")
    y = get_int("y: ")
    compare(x, y)
    add(x, y)
    divide(x, y)

def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError: # error when the wrong data type is entered as input
            pass # try again

def compare(a, b):
    if a < b:
        print(f"{a} is less than {b}")
    elif a > b:
        print(f"{a} is greater than {b}")
    else:
        print(f"{a} is equal to {b}")

def add(a, b):
    print(f"Sum: {a + b}")

def divide(a, b):
    z = a / b
    print(f"Quotient: {z:.50f}")

main()
