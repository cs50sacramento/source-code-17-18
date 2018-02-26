import cs50

userTemp = cs50.get_float("C: ")
print("F: {:.1f}".format(userTemp * 9 / 5 + 32))