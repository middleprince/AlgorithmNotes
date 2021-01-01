#include<cstdio>
#include<cstring>

int toMbits(long long sum, int bits[], int m)
{
    int pos = 0; 
    do
    {
        bits[pos++] = sum % m; 
        sum /= m;
    } while(sum != 0);
    return pos;
}
void print(int bits[], int pos)
{
    while(pos--)
        printf("%d", bits[pos]);
}

int main()
{
    int m, pos, bits[40];
    long a, b;
    long long  sum;
    
    
    while(scanf("%d", &m) && m != 0)
    {
        scanf("%ld %ld", &a, &b); 
        sum = a + b;
        pos = toMbits(sum, bits, m); 
        print(bits, pos);
        printf("\n");
    } 
    return 0;
}
