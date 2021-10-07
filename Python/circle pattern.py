import math
def printPattern(radius):
	for i in range((2 * radius)+1):
		for j in range((2 * radius)+1):
			dist = math.sqrt((i - radius) * (i - radius) +
				(j - radius) * (j - radius))
			if (dist > radius - 1 and dist < radius + 1):
				print("*",end="")
			else:
				print(" ",end="")	
		print()
        # Driver code
radius = 10
printPattern(radius)