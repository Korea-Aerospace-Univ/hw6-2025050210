#include <stdio.h>

int main(void)
{
    char arr[11];
    char max_char;
    int max_count=0;
    int current_count=0;
    char *p;
    char *q;
    
    scanf("%10c", arr);
    
    for(char *p=arr; p<arr+10; p++){
        current_count = 0;
        for(char *q=arr; q<arr+10; q++){
            if(*p==*q)
            current_count++;
        }
        if(current_count>max_count){
        max_count=current_count;
        max_count=*p;
    }
    
    }
    printf("%c %d\n", max_char, max_count);
    

    return 0;
}
