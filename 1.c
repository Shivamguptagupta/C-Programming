#include<stdio.h>

int main(){
    int i,j,n,rows,columns;
    int a[20][20];
    printf("Enter the value of rows and columns\n");
    scanf("%d%d",&rows,&columns);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("Enter element [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix in tabular form :\n");
        for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     return 0;
}