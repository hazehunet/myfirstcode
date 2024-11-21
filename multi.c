#include <stdio.h>
int main (void)
{
    int i,j,row,col;
    printf(" 행개수 = ");
    scanf("%d",&row);
    printf("열 개수= ");
    scanf("%d",&col);

    int a[row][col];
    printf("첫 번째 행렬입력 = ");
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        }
    int b[row][col];
    printf("두 번째 행렬입력 = ");
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            scanf("%d",&b[i][j]);
        }
    }
    int result[i][j];    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];}        
    }
}
for (i = 0; i<row; i++){
    for(j = 0; j< col; j++){
        printf("%d ",result[i][j]);       
    }
    printf("\n");   
}
printf("이름-딴지툰\n, 학번-20244905\n");
}