/* the recursive example in finishig permutation*/

#include <cstring>
#include <cstdio>

#define MAX 12

int n , p[MAX];
bool hashTable[MAX] = {false};


void permutaion(int index)
{
    if(index == n+1){
        // one permutation
        for(int i=1; i<=n; i++)
            printf("%d", p[i]);
        printf("\n");
        return ;
    }
    for(int x=1; x<=n; x++){
        if(hashTable[x]==false){
            p[index] = x;
            hashTable[x] = true;
            permutaion(index+1);
            hashTable[x] = false;
        } 
    }
}

int main(void)
{
    n = 4;
    permutaion(1);
    return 0;
}


