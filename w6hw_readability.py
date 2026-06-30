from cs50 import get_string


def main():
    text = get_string("Text: ")
    l = count_letters(text)
    w = count_words(text)
    s = count_sentences(text)
    L = l / w * 100
    S = s / w * 100
    CLindex = round(0.0588 * L - 0.296 * S - 15.8)
    get_grade(CLindex)


def count_letters(words):
    l = 0
    for char in words:
        if char.isalpha():
            l += 1
    return l


def count_words(words):
    w = 1
    for char in words:
        if char == ' ':
            w += 1
    return w


def count_sentences(words):
    s = 0
    for char in words:
        if char in ['.', '?', '!']:
            s += 1
    return s


def get_grade(CLindex):
    if CLindex < 1:
        print("Before Grade 1")
    elif CLindex > 16:
        print("Grade 16+")
    else:
        print(f"Grade {CLindex}")


main()
