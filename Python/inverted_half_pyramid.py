n=int(input())
for i in range(n+1):
    for _ in range(i,n+1):
        print("*",end="")
    print("")