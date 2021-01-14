#include<cstdio>
#include<vector>
#include<algorithm>
using std::vector;

struct mouse
{
    int weight;
    char hat[12];
};

int main()
{
    vector<mouse> mices;
    int n;
    mouse temp;

    while(scanf("%d", &n) != EOF)
    {
        mices.clear();      
        while(n--)
        {
            scanf("%d %s", &(temp.weight), temp.hat);
            mices.push_back(temp);
        }
        std::sort(mices.begin(), mices.end(), 
                [] (const mouse& a, const mouse &b) {return a.weight > b.weight;});
        for(auto const& elem : mices) 
            printf("%s\n", elem.hat);
    }
    return 0;
}
