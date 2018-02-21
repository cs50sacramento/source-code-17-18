import cs50

print("Enter a valid grade: ", end="")
percent = cs50.get_int()

if percent >= 90:
	print("A")
elif percent >= 80:
	print("B")
elif percent >= 70:
	print("C")
else:
	print(":(")