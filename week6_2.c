#include<stdio.h>
int main() 
{
    char str[1000];
    char* p;
    p = str;
    printf("Input : ");
    scanf("%s", str);
    
    printf("Output : ");
    while (*p != '\0')
    p++;
    p--;
    while (p >= str)
    { 
        printf("%c", *p);
        p--; 
    }
    
    return 0;
}