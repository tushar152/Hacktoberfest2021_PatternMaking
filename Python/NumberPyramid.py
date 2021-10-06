rows = int(input("Enter the number of rows: "))

counter = 1
while(counter <= rows):
    rowcounter = 0
    while(rowcounter<counter):
        print(rowcounter, end=' ')
        rowcounter+=1
    print()
    counter+=1  
