#include <cstdio>


int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

void swap(int* &a, int* &b)
{
    int *temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int a, b, d;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a<b){
            int *x = &a, *y = &b;
            swap(x, y);
            printf("%d\n", a*(b/gcd(a, b)));  //避免溢出
        }
    }
    return 0;
}
