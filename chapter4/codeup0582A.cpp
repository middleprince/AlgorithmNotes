#include <cstdio>
#include <cstring>
#define MAXBOOK 220


int main(void)
{
    int n, m;
    
    while(scanf("%d %d", &n, &m) !=EOF && n>1){
        int person[n];
        int hashTable[MAXBOOK] = {0}; 
        for(int i=0; i<n; i++){
            scanf("%d", &person[i]); 
            hashTable[person[i]] += 1;
        } 
        for(int j=0; j<n; j++) 
        {
            int books = hashTable[person[j]];
            if(books>1)
                printf("%d\n", books-1 );
            else
               printf("BeiJu\n"); 
        }
    }
    return 0;
}
