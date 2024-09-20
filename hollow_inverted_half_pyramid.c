#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%i",&rows);

    for (int i=1; i<=rows; i++){
        for (int j=rows; j>=i; j--){
            if (i!=1){
                if (j==rows || j==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}