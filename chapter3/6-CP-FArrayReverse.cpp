#include<cstdio>
#include<cctype>
#include<cstring>

#define MAXIN 220
#define S1
#define NONEWLINE

inline void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char str_in[MAXIN];
    // Fixed: fgets will keep '\n', remove multiple '\n';
    //while(gets(str_in))
    while(fgets(str_in, 1024, stdin))
    {
    #ifdef NOSPACE
        int len = strlen(str_in);
        while(isspace(str_in[--len])) ;
        str_in[len+1] = '\0';
    #endif

    #ifdef NONEWLINE
        int len = strlen(str_in);
        while((str_in[--len]) == '\n') ;
        str_in[len+1] = '\0';
    #endif
        

    #ifdef S1
        for(int i=strlen(str_in)-1; i>=0; --i)  
        {
            printf("%c", str_in[i]);
        }
        printf("\n");
    #endif
    
    #ifdef S2
        for(int i=0, j=strlen(str_in)-1; i<j; ++i, --j)
            swap(&str_in[i], &str_in[j]);
        printf("%s\n", str_in);
        
    #endif
    
    }
    

    return 0;
}
