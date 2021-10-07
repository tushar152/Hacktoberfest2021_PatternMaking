
def printHutStar(n):


	for i in range(n):

		for j in range(i + 1, n):
			print(' ', end = '')

		for j in range(0, 2 * i + 1):
			print('*', end = '')
		print()

	for i in range(3):

		for j in range(3):
			print('*', end = '')

		for j in range(2 * n - 7):
			print(' ', end = '')

		for j in range(3):
			print('*', end = '')
		print()

n = 7

printHutStar(n)

