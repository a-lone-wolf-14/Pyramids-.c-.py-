rows=int(input("Enter the number of rows: "))

for i in range (1,rows+1):
    for j in range (1,i+1):
        if i!=rows:
            if j==1 or j==i:
                print("*",end='')
            else:
                print(" ",end='')
        else:
            print("*",end='')
    print('\n')