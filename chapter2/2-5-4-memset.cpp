#include <cstdio>
#include <cstring>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    char c[] = {1, 2, 3, 4, 5};
    auto n = sizeof(a);
    auto m = sizeof(c);
    memset(a, 1, n);
    memset(c, -1, m);
    printf("located int array size is: %ld\n", n);
    printf("located char array size is: %ld\n", m);

    for(decltype(n) i=0; i<n/sizeof(int); ++i){
        printf("%d ", a[i]); 
    }
    puts(" ");
    --n;
    --m;

    printf("located int array size is: %ld\n", n);
    //printf("%d ", a[0]); 
    //for(decltype(n) i=n; i>0; --i){
    //    printf("%d ", c[i]); 
    //}

    //while(n--){
    //    printf("%d ", a[n]); 
    //}

    return 0;
}
