#include<cstdio>

inline void swap(int a[], int x, int y)
{
    //a[x] ^= a[y];
    //a[y] ^= a[x]; 
    //a[x] ^= a[y];
    
    int temp = a[y];
    a[y] = a[x];
    a[x] = temp;
    return ;
}

void qsort(int a[], int left, int right)
{
    if(left > right)
        return;
    int pivot = a[(left+right) / 2];
    swap(a, left, (left+right)/2);
    
    int last = left;
    for(int i = left+1; i<=right; ++i)
    {
        if(a[i] < pivot) 
            swap(a, i, ++last);
    }        
    swap(a, left, last);
    qsort(a, left, last-1);
    qsort(a, last+1, right);

}

int main()
{
    const int maxn = 120;
    int data[maxn];
    
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int i = 0;
        int temp = n;
        while(temp--)  
            scanf("%d", &data[i++]);
        qsort(data, 0, n-1);

        for(int i=0; i<n; ++i)
            printf("%d ", data[i]);
        printf("\n");
        
    }
    
    return 0;
}
