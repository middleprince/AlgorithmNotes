#include <cstdio>
#include <unordered_map>
using namespace std;

int main()
{
	int n,m,temp;
	while(~scanf("%d",&n))
	{
        unordered_map<int,bool> mp;
        while(n--)
        {
            scanf("%d",&temp);
            mp[temp]=true;
        }
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&temp);
            if(mp[temp]==false)
                printf("NO\n");
            else
                printf("YES\n");
        }
	}
	return 0;
}

