#include <cstdio>
#include <cstring>
#define MAX 80

char * getWord(char s[])
{   int i = 0;  
    while (scanf("%c", &s[i]) != EOF && s[i] != ' ')
        i++
        ;
    s[++i] = '\0';
    return s;
}
void printRecursive(void)
{   char ss[MAX]; 
    char *ptr = getWord(ss);
    while( *ptr){
        printRecursive(); 
        printf("%s ", ss);
    }
}
int main(void)
{
    printRecursive();
    printf("\n");
    return 0;
}
