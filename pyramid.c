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
        for (int k=2*i-1; k>=1; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
