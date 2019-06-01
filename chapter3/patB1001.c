/* Calltz Surmise 3n+1 */

#include <stdio.h>

int main(void)
{
    int n, count=0;
    if (scanf("%d", &n) == EOF)
        return -1;  
    while(n>1){
        if(n%2 == 0){
            n /=2;
            count++;
        }else{
            n = (3*n + 1) / 2;
            count++;
        }
    }

    printf("%d\n", count);
}
