#include<stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%i",&rows);

    for (int i=1; i<=rows; i++)
    {
        for (int j=rows-1; j>=i; j--)
        {
            printf(" ");
        }
        for (int k=1; k<=2*i-1; k++)
        {
            if (i!=rows)
            {
                if (k==1 || k==2*i-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}