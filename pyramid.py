rows=int(input("Enter the number of rows: "))

for i in range (1,rows+1):
    for j in range (1,rows):
        if j>=i:
            print(" ",end='')
    for k in range (1,2*i):
        print("*",end='')
    print("\n")
