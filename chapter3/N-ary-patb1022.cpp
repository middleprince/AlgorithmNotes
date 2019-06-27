// A + B and convert the reulst to N-ary numbers
#include <cstdio>
int ans[22] = {0};

int main(void)
{
    int a, b, d;
    if(scanf("%d%d%d", &a, &b, &d) != EOF){
        int sum = a + b; 
        int i=0, y; 
        y = sum;
        do{
            ans[i++] = y % d;
            y = y/d;  
        }while(y>0);
       
        for(int j=i-1; j>=0; j--)
            printf("%d", ans[j]);
        printf("\n");
    
    }
    return 0;
}
