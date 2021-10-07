n = int(input("Enter side of rhombus: "))

for i in range(n):
    if (i ==0 or i == n-1):
        print(' '*i + '* '*n)
    else:
        print(' '*i + '* ' + '  '*(n-2) + '*')
