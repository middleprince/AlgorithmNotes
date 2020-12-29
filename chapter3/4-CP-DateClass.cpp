#include<cstdio>
#include<cstring>


class Date 
{
public:
    friend void print(const Date &);
    Date() = default;
    Date(int yr, int mo, int da) : year(yr), month(mo), day(da), 
        year_p(yr), month_p(mo), day_p(da) {}
    
    int date_plus(); 

private:
    static const int year2days[13][2];
    
    int year, month, day;
        int year_p, month_p, day_p;
};

const int Date::year2days[13][2]= { {0, 0}, {31, 31}, {28, 29},
        {31,31}, {30,30},{31,31}, {30,30}, {31,31}, {31,31}, {30,30}, 
        {31,31}, {30,30}, {31,31} };

int Date::date_plus()
{
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); 
    if(Date::year2days[month][leap] < ++day_p) 
    {
        ++month_p;
        if(month_p > 12)
        {
        ++year_p;
        }
        day_p = 1;
    }

    return 0;
}

void print(const Date &date)
{
    printf("%04d-%02d-%02d\n", date.year_p, date.month_p, date.day_p); 
}

int main() 
{
    int m, year, month, day;
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d %d %d", &year, &month, &day);
        Date date(year, month, day);    
        date.date_plus(); 
        print(date);
    }

   return 0;
    
}
