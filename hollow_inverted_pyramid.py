rows=int(input("Enter the number of rows: "))

for i in range (rows,0,-1):
    for j in range (rows,0,-1):
        if j>i:
            print(" ",end='')
    for k in range (1,2*i):
        if i!=rows:
            if k==1 or k==2*i-1:
                print("*",end='')
            else:
                print(" ",end='')
        else:
            print("*",end='')
    print('\n')