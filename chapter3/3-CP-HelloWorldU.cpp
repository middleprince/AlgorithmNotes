#include<cstdio>
#include<cstring>

int main()
{
    char strs[120];
    int len, side, mid;
    
    if(~scanf("%s", strs))
    {
        len = strlen(strs); 
        if(len<5) return 0;
        side = (len+2) / 3;
        mid = len - 2 * side;
        int i = 0;
        for( ; i<side-1; i++)
        {
            int tmp = mid;
            printf("%c", strs[i]); 
            while(tmp--)
                printf(" ");
            printf("%c\n", strs[len-i-1]); 
        }
        
        mid += 2;
        while(mid--)
        printf("%c", strs[i++]);
    }
    return 0;
}

