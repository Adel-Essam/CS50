import csv
import sys


def main():
    if len(argv) != 3:
        print(len(argv))
        print("Usage: python dna.py data.csv sequence.txt")
        exit(1)

    with open(argv[1]) as file:
        file_reader = csv.DictReader(file)
        data = []
        for i in file_reader:
            data.append(i)
    ll = len(i)



    with open(argv[2]) as txt:
        case = txt.read()



    arrk = []
    c = ll - 1
    for n in data:
        for k in n.keys():
            if k != "name":
                arrk += [k]
            if len(arrk) == c:
                break

    out = []
    for nk in arrk:
        out +=[longest_match(case, nk)]

    out2 = []
    il = 0
    comp = len(out)
    yes = 0
    yes = bool(yes)
    for o in data:
        for d in o:
            s = str(o[d])
            if s.isdigit():
                out2.append(int(o[d]))
            if comp == len(out2):
                if out == out2:
                    print(data[il]["name"])
                    yes = 1
                else:
                    out2.clear()
        if yes == 1:
            break

        il += 1






def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
