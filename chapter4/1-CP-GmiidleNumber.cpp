#include<cstdio>
#include<algorithm>
#include<vector>

using std::vector;

int main()
{
    int n;
    vector<int> data;

    while(scanf("%d", &n) != EOF && n > 0)
    {
        data.clear(); 
        int temp = n, elem;
        while(temp--) 
        {
            scanf("%d", &elem); 
            data.push_back(elem);
        }
        sort(data.begin(), data.end());
        
        int mid = 0;
        if(n % 2 == 0)
            mid = (data.at(n/2) + data.at(n/2 - 1)) / 2;
        else
            mid = data.at(n/2);
        printf("%d ", mid); 
    }
    return 0;
}

