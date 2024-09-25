rows=int(input("Enter the number of rows: "))

for i in range (rows,0,-1):
    for j in range (rows,0,-1):
        if j>i:
            print(" ",end='')
    for k in range (1,2*i):
        print("*",end='')
    print("\n")
