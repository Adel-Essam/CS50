# TODO
def main():
    s = input("Text: ")
    se = 0
    l = 0
    for i in s:
        if i.isalnum():
            l += 1
        if i == "." or i == "!" or i == "?":
            se += 1
    s = s.split()
    w = len(s)
    l = (l / w) * 100
    se = (se / w) * 100
    if ((l * 0.0588) - (se * 0.296) - 15.8) < 1:
        print("Before grade 1")
    elif ((l * 0.0588) - (se * 0.296) - 15.8) > 16:
        print("Grade 16+")
    else:
        print(f"Grade {(l * 0.0588) - (se * 0.296) - 15.8 :.0f}")


main()
