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

// map version

#include<cstdio>
#include<string>
#include<vector>
#include<map>

using std::vector;
using std::map;
using std::string;


const map<string, int> moth2days = {{"January", 13}, {"February", 14}, 
    {"March", 3}, {"April", 4}, {"May", 5}, {"June", 6}, {"July", 7}, 
    {"August", 8}, {"September", 9}, {"October", 10}, {"November", 11},
    {"December", 12}};

const vector<string> weekdate = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday"};

int main()
{
    int day, year, the_day;
    int y, c;
    char month[12]; 

    while(scanf("%d %s %d", &day, month, &year) != EOF) {
        // TOFIX: Runtime Error 
        int m = moth2days.at(month);
        if(m == 13 || m ==14) year -= 1;
        y = year % 100;
        c = year / 100; 
        
        // FIXED: Zeller's version will cuase run time error.
        // Zeller's version 
        //the_day = y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + day - 1;
        
        // Kim Laesen version
        the_day = day + 2 * m + 3 * (m + 1) / 5 + year + year / 4 - 
            year / 100 + year / 400 + 1;
        the_day %= 7;
        
        printf("%s\n", (weekdate.at(the_day)).c_str());
    } 
    return 0;
}
