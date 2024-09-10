/******************************************* 
WAP that will take n integers into a sqrt(n) by sqrt(n) array (2D) and show them as
traditional matrix view.
_____               ______
INPUT               OUTPUT
-----               ------
9                       9 8 7
9 8 7 6 5 4 3 2 1       6 5 4
                        3 2 1
********************************************/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter Array size :");
    scanf("%d",&n);
    int m=sqrt(n);
    int num[m][m];
    printf("Enter your number:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++)
        scanf("%d", &num[i][j]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++)
        printf("%d ", num[i][j]);
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/