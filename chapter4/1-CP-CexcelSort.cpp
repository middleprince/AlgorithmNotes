#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>

using std::vector;
using std::string;

struct Student{
    int no;
    string name;
    int grades;
};
    
// TODO: Fix error 50
int main()
{
   int n, c; 
   vector<Student> data;
   while(scanf("%d %d", &n, &c) != EOF)
   {
        int temp_no, temp_grade; 
        char name[20];
        while(n--)
        {
            scanf("%d %s %d", &temp_no, name, &temp_grade);
            data.push_back(Student{temp_no, name, temp_grade}); 
        }
        
        switch(c)
        {
            case 1: 
                std::sort(data.begin(), data.end(), 
                        [] (const Student& a, const Student &b) 
                            {return a.no < b.no;} ); 
                break;
            case 2:
                std::sort(data.begin(), data.end(), 
                        [] (const Student& a, const Student &b) 
                           {return a.name.compare(b.name);} ); 
                break;
                        
            case 3:
                std::sort(data.begin(), data.end(), 
                        [] (const Student& a, const Student &b) 
                           {return a.grades <= b.grades;} ); 
                break;
        }

        for(auto const& iter : data)
        {
            printf("%06d %s %d\n", iter.no, iter.name.c_str(), iter.grades); 
        }
        
   }
    
}

