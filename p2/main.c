#include <stdio.h>

int main(void)
{
    int N;
    int arr1[20];
    int arr2[20];
    int i;
    int sum;
    
    scanf("%d", &N);
    
    for(int *p=arr1; p<arr1+N; p++){
        scanf("%d", (p+i));
    }
    for(int *q=arr2; p<arr2+N; p++){
            scanf("%d", (q+i));
    }
    for(int *p=arr1, *q=arr2+(N-1); p<arr1+N; p++,q--){
        int sum=*p+*q;
        printf(" %d", sum);
    }
    
    return 0;
}


