#include <stdio.h>
int main (void)
{
    int i,j,n=5;
    int a[n];
    for (i=0; i<n; i++){
        printf("정수를 입력하시오: ");
        scanf("%d",&a[i]);
    }
    for (i=0; i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("최대값= %d\n",a[0]);
    printf("최소값= %d\n",a[n-1]);
    printf("\n이름-딴지툰,\n학번-20244905\n");
}