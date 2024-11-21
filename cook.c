#include <stdio.h>
int main (void)
{
    int i,j,row,col;
    printf(" 행개수 = ");
    scanf("%d",&row);
    printf("열 개수= ");
    scanf("%d",&col);

    int a[row][col];
    printf("행렬입력 = ");
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){
            scanf("%d",&a[i][j]);
}
}

int b[col][row];
for (i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        b[j][i] = a[i][j];
    }
}
for (i = 0; i < col; i++) {
    for (j = 0; j < row; j++) {
        printf("%d ", b[i][j]);
        }
    printf("\n");
}
printf("이름-딴지툰\n, 학번-20244905\n");
     return 0;

}