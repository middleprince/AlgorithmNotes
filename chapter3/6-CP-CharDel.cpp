#include<cstdio>
#include<cstring>

#define MAX 1024

int main()
{
    char input_str[MAX];
    int c;
    
     
    while(fgets(input_str, 1024, stdin) && (c=getchar()))
    {
        getchar();
        for(int i=0; i<strlen(input_str); ) 
        {
            if(input_str[i] == c) 
                ++i;
            else
                printf("%c", input_str[i++]);
        }
    }
    return 0;
        
}
