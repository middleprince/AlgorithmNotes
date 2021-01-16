#include<cstdio>
#include<map>
#include<vector>

using std::map;
using std::vector;

int main()
{
    int n, temp;
    map<int, int> unique_hash;
    vector<int> data;
    
    while(scanf("%d", &n) != EOF)
    {
        unique_hash.clear();
        data.clear();
        while(n--) 
        {
            scanf("%d", &temp); 
            unique_hash[temp] += 1;
            data.push_back(temp);
        }

        bool found = false;
        for(auto const& elem : data)
        {
            if(unique_hash.at(elem) > 1) 
                continue;
            printf("%d\n", elem);
            found = true;
            break;
        }
        if(!found)
            printf("None\n");
    }
    return 0;
}

