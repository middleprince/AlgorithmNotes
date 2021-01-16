#include<cstdio>
#include<cstring>
#include<vector>
#include<map>

using std::vector;
using std::map;

int main()
{
    int N, M;
    map<int, int> book_map;
    vector<int> data;
    while(scanf("%d %d", &N, &M) != EOF)
    {
        book_map.clear();
        data.clear();
        int temp;
        for(int i=0; i<N; ++i)  
        {
            scanf("%d", &temp);
            data.push_back(temp);
            book_map[temp] += 1;  
        }
        
        for(const auto& elem : data)
        {
            int friends = book_map.at(elem); 
            if(friends == 1)
                printf("BeiJu\n");
            else
                printf("%d\n", friends-1);
        }
    }
    return 0;
}
