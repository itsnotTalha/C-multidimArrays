/******************************************* 
WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise
and column-wise.                        
_____               ______
INPUT               OUTPUT
-----               ------
2 3                 Row-wise: 1 2 3 6 5 4
1 2 3               Column-wise: 1 6 2 5 3 4
6 5 4
********************************************/
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter Array size:");
    scanf("%d %d",&m,&n);
    int num[m][n];
    int row[m*n];
    int column[m*n];
    printf("Enter your number:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        scanf("%d", &num[i][j]);
    }
    printf("Row-wise: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        printf("%d ",num[i][j]);
    }
    puts("");
    printf("Column-wise: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        printf("%d ",num[j][i]);
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/