#include <stdio.h>
int main (void)
{
    int n,i,j;
    printf("입력할 정수의 개수: ");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++){
        printf("%d 번째 정수를 입력하시오: ",i);
        scanf("%d",&a[i]);  
    }
    for (i=0; i< n-1; i++){
        for (j=i+1; j< n; j++){
            if (a[i] < a[j]){
                int temp= a[i];
                a[i] = a[j];
                a[j] = temp; 
            }
        }
    }  
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("이름-딴지툰\n, 학번-20244905\n");
}