#Printing pattern 
n = int(input("Enter a number:"))
def pattern(n):
	List = []
	for i in range(1,n+1):
		List.append("*"*i)
	print("\n".join(List))



pattern(n)
