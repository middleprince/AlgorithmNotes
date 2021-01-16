#include<cstdio>
#include<cstring>

const int maxn = 110;
//TODO: fix wrong answer 50.
int main()
{
    int m, n;
    int data[maxn], group[maxn], group_hash[maxn][maxn];
    int number_mark[maxn], group_mark[maxn];
    scanf("%d", &m); 
    while(m--)
    {
        memset(group_hash, 0, sizeof(group_hash));
        memset(number_mark, 0, sizeof(number_mark));
        memset(group_mark, 0, sizeof(group_mark));
        scanf("%d", &n);
        int max_group = 0;
        int max_number = 0;
        int num_count = 0;

        for(int i=0; i<n; ++i)
        {
           scanf("%d", &data[i]);
           number_mark[data[i]] = 1;
           if(data[i] > max_number)
               max_number = data[i];
        }
        for(int i=0; i<= max_number; ++i)
            if(number_mark[i])
                ++num_count;


        for(int i=0; i<n; ++i)
        {
           scanf("%d", &group[i]);
           group_mark[group[i]] = 1;
           if(group[i] > max_group)
               max_group = group[i];
        }
        
        for(int i=0; i<n; ++i)
            group_hash[group[i]][data[i]] += 1; 

        for(int i=0; i<=max_group; ++i)
        {
            int temp = num_count;
            if(!group_mark[i])
                continue;
            printf("%d={", i);
            for(int j=0; j<=max_number; ++j) 
            {
                if(!number_mark[j]) 
                    continue;
                if(temp-1 > 0)
                    printf("%d=%d,", j, group_hash[i][j]);
                else
                    printf("%d=%d", j, group_hash[i][j]);
                --temp;
            }
            printf("}\n");
        }
    }
   
    return 0;
}
