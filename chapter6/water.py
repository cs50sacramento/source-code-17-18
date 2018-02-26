import cs50

while True:
	minutes = cs50.get_int("minutes: ")
	if minutes > 0:
		break

print("bottles: {}".format(minutes * 12))