#include<cstdio>
#include<cstring>

const int year2days[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31,31}, {30,30},
    {31,31}, {30,30}, {31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31} };

int main() 
{
   int year, days; 
   while(scanf("%d %d", &year, &days) != EOF)
   {
        int month = 1;
        int day = 0;
        bool leap = 0;

        leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); 
        while(days > 0)
        {
            days -= year2days[month++][leap]; 
            
        }
        day = days + year2days[--month][leap];
        
        printf("%04d-%02d-%02d\n", year, month, day); 
   }

   return 0;
    
}
