#include<cstdio>
#include<cstring>
#include<cmath>


    
int main()
{
    char num_c[32], num_int[32];
    char bits[128];
    while(scanf("%s", num_c) != EOF)
    {
        int len = strlen(num_c);
        for(int i=0; i<len; ++i)
            num_int[i] = num_c[i] - '0';

        int start = 0;
        int pos = 0;
        do
        {
            bits[pos++] = num_int[len-1] % 2 + '0'; 
            for (int j=start; j<len; ++j)
            {
                if(num_int[j] % 2 && j != len - 1) 
                    num_int[j+1] += 10; //shift 1 position rightward.
                
                num_int[j] /= 2; 
            }
            for(; start<len && !num_int[start]; ) ++start;
            //if(start<len && num_int[start] == 0) // find the next non-zero start position.
            //    ++start;
        } while(start < len);
        
        while(pos--)
        {
            printf("%c", bits[pos]); 
        }
        printf("\n");
    }

    return 0;
}
