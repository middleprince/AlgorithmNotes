// draw square using char 
// input : int length; char c
#include<stdio.h>
#include <string.h>
#define MAX 22
char blank[22];  

void drawCol(char c, int n)
{
    while(n--)
        printf("%c", c);
    printf("\n");
}
void drawRow(char c, int n)
{
    printf("%c", c); 
    while(n--){
        printf(" "); 
    }
    printf("%c", c); 
    printf("\n");
}


int main(void)
{
   int col, row;
   char c;
   if(scanf("%d %c", &col, &c) != EOF && col!=0){
       if(col%2 == 0)
           row = col/2; 
       else 
           row = col/2 + 1;
       
       drawCol(c, col);
       
       while((row--)>1){
           drawRow(c, col-2);
       }
       drawCol(c, col);
   }

    return 0;
}

