#include<cstdio>
#include<cstring>

int main()
{
    char short_str[1024];
    char long_str[1024][1024];
    
    if(!fgets(short_str, 1024, stdin))
        return -1;
    short_str[strlen(short_str) - 1] = '\0'; // fgets collect the \n in input stream. remove it.
    
    int idx = 0;
    while(fgets(long_str[idx++], 1024, stdin)) ;
     
    for(int i=0; i<idx; ++i)
    {
        int len = strlen(long_str[i]);
        for(int j=0; j<len; )
        {
            if(long_str[i][j] == ' ')             
            {
                ++j;
                continue;
            }
            else if(!strncasecmp(long_str[i]+j, short_str, strlen(short_str)) )
            {
                j += strlen(short_str); 
                continue;
            }
            printf("%c", long_str[i][j++]);
        }
    }
    

    return 0;
}
