#include<stdio.h>
#define MAX 220

int store[MAX] = {0};

int main(void)
{
    int n, target;
    while(scanf("%d", &n) !=EOF){ 
        for(int i=0; i<n; i++)
            scanf("%d", &store[i]); 
        scanf("%d", &target);

        int indx;
        for(indx=0; indx<n; indx++){
            if(store[indx] == target) 
                break;
        }
        if(indx < n)
            printf("%d\n", indx);
        else
            printf("-1\n");
    }
    return 0;
    
}

