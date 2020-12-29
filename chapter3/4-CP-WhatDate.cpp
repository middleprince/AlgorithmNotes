/*
 * calculating the week day of the date by Zeller's formula.
 * 1. Zeller's Formula
 * w = y+[y/4]+[c/4]-2c+[26(m+1)/10]+d-1 
 * in which, y stands for the last two digits of the year;
 * c stand for age-1;
 * m stand for month number, but it rang for 3 to 14, 
 * in which 13,14 as the firt and sencond month in last year.
 * d stands for the day.
 *
 *
 * 2. Kim larsen calculation formula.
 * W= d + 2*m + 3 * (m+1) / 5 + y + y / 4 - y / 100 + y / 400 + 1
 * W %= 7
 */

#include<cstdio>
#include<cstring>

// FIXED: running error for which October written as Octorber!!!
const char month2num[15][12] = {
    {"None"}, {"None"}, {"None"},  
    {"March"}, {"April"}, {"May"}, {"June"}, {"July"}, 
    {"August"}, {"September"}, {"October"}, {"November"},
    {"December"}, {"January"}, {"February"}
};

const char weekdate[7][12] = {
    {"Sunday"}, {"Monday"}, {"Tuesday"}, 
    {"Wednesday"}, {"Thursday"}, {"Friday"}, {"Saturday"}
};

int main()
{
    int day, year, the_day;
    int y, c;
    char month[16]; 

    while(scanf("%d %s %d", &day, month, &year) != EOF) {
        int m = 0; 
        while(strcmp(month, month2num[m]) != 0)
            ++m;
        if(m == 13 || m ==14) 
            year -= 1;
        y = year % 100;
        c = year / 100; 
        
        //the_day = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + day - 1;
        the_day = day + 2 * m + 3 * (m + 1) / 5 + year + year / 4 - 
            year / 100 + year / 400 + 1;
        the_day %= 7;
        

        printf("%s\n", weekdate[the_day]);
    } 
    return 0;
}
