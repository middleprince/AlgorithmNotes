#include<cstdio>
#include<map>
#include<set>
#include<vector>

using std::map;
using std::vector;
using std::set;

int main()
{
    int m;
    scanf("%d", &m);
    while(m--)
    {
        int n, temp;
        vector<int> data_num, data_group;
        set<int> state_num, state_group;
        
        scanf("%d", &n); 
        for(int i=0; i<n; ++i)
        {
            scanf("%d", &temp); 
            data_num.push_back(temp);
            state_num.insert(temp);
        }

        for(int i=0; i<n; ++i)
        {
            scanf("%d", &temp); 
            data_group.push_back(temp);
            state_group.insert(temp);
        }
        
        for(auto iter=state_group.cbegin(); iter!=state_group.cend(); ++iter)
        {
            printf("%d={", *iter); 
            map<int, int> num_in_group; // one group a time 
            for(auto iter2=state_num.cbegin(); iter2!=state_num.cend(); ++iter2)
                num_in_group[*iter2] = 0;
            
            for(int i=0; i<n; ++i)
            {
                if(data_group[i] == *iter) 
                    num_in_group[data_num[i]]++;
            }
            for(auto iter3=state_num.cbegin(); iter3!=state_num.cend(); ++iter3)
            {
                if(iter3 != state_num.cbegin()) 
                    printf(",");
                printf("%d=%d", *iter3, num_in_group.at(*iter3));
            }
            printf("}\n");
        }
        
    }
    return 0;
}
