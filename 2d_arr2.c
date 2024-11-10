#include <stdio.h>
int main()
{
    int row,col;
    printf("enter the value of row");
    scanf("%d",&row);
    printf("enter the value of col");
    scanf("%d",&col);
    int a[row][col];
    printf("enter the element of matrix");
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }   
    return 0;
}