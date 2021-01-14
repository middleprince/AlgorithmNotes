#include<cstdio>
#include<algorithm>

int main()
{
    const int maxn = 1200;
    int data[1000], n;
    
    while(scanf("%d", &n) != EOF)
    {
        if(n == 1)
        {
            int a;
            scanf("%d", &a);
            printf("%d\n%d\n", a, -1); 
            continue;
        }
        int temp = n, i = 0;
        while(temp--)
            scanf("%d", &data[i++]); 
        std::sort(data, data+n);
        printf("%d\n", data[n-1]);
        for(int i=0; i<n-1; ++i)
            printf("%d ", data[i]);
        printf("\n");
    }

    return 0;
}
