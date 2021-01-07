#include<cstdio>
#include<cstring>

int main()
{
    char short_str[1024];
    char long_str[1024][1024];
    char long_str_low[1024][1024];

    if(!fgets(short_str, 1024, stdin))    
        return -1;
    
    for(int i=0; i<strlen(short_str); ++i)
        if(short_str[i] >= 'A' && short_str[i] <= 'Z')
            short_str[i] += 'a' - 'A';
    short_str[strlen(short_str)-1] = '\0';


    int idx = 0;
    while(fgets(long_str[idx++], 1024, stdin)) ;

        
    for(int i=0; i<idx; ++i)
    {
        for(int z=0; z<strlen(long_str[i]); ++z)
        {
            long_str_low[i][z] = long_str[i][z];
            if(long_str_low[i][z] >= 'A' && long_str_low[i][z] <= 'Z')
                long_str_low[i][z] += 'a' - 'A';
        }

        for(int j=0, k=0; j<strlen(long_str[i]); )
        {
            if(long_str_low[i][j+k] == short_str[k])
            {
                ++k;
                if( k == strlen(short_str))
                {
                    j += k; 
                    k = 0;
                }
            }
            else 
            {
                if(long_str_low[i][j] != ' ')             
                    printf("%c", long_str[i][j]);
                ++j;
                k = 0;
            }
        }
    }
    

    return 0;
}
