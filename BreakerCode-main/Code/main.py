inp = input("Enter a 6 Digit Password: \t")
if len(inp) > 6:
    print("Your password is greater than 6 Digits!")
    exit()
file = open("a.txt", "w")
file.write(inp)
file.close()
exit()