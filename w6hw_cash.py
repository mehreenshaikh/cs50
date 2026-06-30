from cs50 import get_float


def main():
    while True:
        change = get_float("Change owed: ")
        if change > 0:
            break
    change = round(change * 100)
    total_coins = calc_coins(change)
    print(total_coins)


def calc_coins(change):
    coins = 0

    coins += change // 25
    change %= 25

    coins += change // 10
    change %= 10

    coins += change // 5
    change %= 5

    coins += change

    return coins


main()
