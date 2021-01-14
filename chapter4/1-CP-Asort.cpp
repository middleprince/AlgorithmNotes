#include<cstdio>
#include<vector>
#include<algorithm>

using std::vector;

int main()
{
    int n, temp;
    vector<int> ins;
    while(scanf("%d", &n) != EOF)
    {
        ins.clear();
        while(n--)
        {
            scanf("%d", &temp); 
            ins.push_back(temp);
        }
        sort(ins.begin(), ins.end());
        for(const auto& elem : ins) 
            printf("%d ", elem);
        printf("\n");    
        
    }
    return 0;
    
}
