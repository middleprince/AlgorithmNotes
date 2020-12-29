// compute the interval of two date, the date input version is showing 
// as YYYYMMDD; if two date is near, the interval wiil be 2.
// TOFIX: run time out of limits

#include <cstdio>

//int days[2][13]= { (0,0), (31,31), (28,29), (31,31), (30,30), (31,31),
// (30,30) ,(31,31), (31,31), (30,30), (31,31), (30,30), (31,31) };

// the storing order matters, it is more frequent that accessing the data
// by leap year order, which orgnizing the year in column dimension will be
// more efficient.For array data storing by row dimension. 
const int days[13][2] = { {0, 0}, {31, 31}, {28, 29}, {31,31}, {30,30},
    {31,31}, {30,30}, {31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31} };
// is leap year
int inleap(int year)
{
    return ( year%4 == 0 && year%100 != 0) || (year % 400 == 0);
}

int main(void)
{
    int day1, day2, y1, y2, m1, m2, d1, d2; 
    while(scanf("%d %d", &day1, &day2) != EOF)
    {
        int ans = 1;
        if(day1 > day2)
        {
            day1 ^= day2;
            day2 ^= day1;
            day1 ^= day2;
        }
        y1 = day1 / 10000, m1 = day1 % 10000 / 100, d1 = day1 % 100;
        y2 = day2 / 10000, m2 = day2 % 10000 / 100, d2 = day2 % 100;
        while( y1<y2 || m1<m2 || d1<d2)
        {
            d1++;
            //if(d1 == days[inleap(y1)][m1] + 1)
            if(d1 == days[m1][inleap(y1)] + 1)
            {
                m1 += 1;
                d1 = 1;
            }
            if(m1 > 12)
            {
                m1 = 1;
                y1 +=1; 
            }
            ans++;
        }
        printf("%d\n", ans);
    
    }
    return 0;
}
