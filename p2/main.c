#include <stdio.h>

int main(void)
{
    int N;
    int arr1[20];
    int arr2[20];
    int i;
    int sum;
    
    int *p=arr1;
    int *q=arr2;
    
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
        scanf("%d", (p+i));
    }
    for(i=0; i<N; i++){
        scanf("%d", (q+i));
    }
    for(i=0; i<N; i++){
        int sum=*(p+i)+*(q+(N-1-i));
    }
    printf("%d", sum);
    
    return 0;
}
