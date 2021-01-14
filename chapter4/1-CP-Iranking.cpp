#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>

using std::vector;
using std::map;

struct StudentGrades
{
    char sno[22];
    int tests[12];
    int grades = 0;
};

int main()
{
    int N, M, grade_line;    
    map<int, int> question_grades;
    StudentGrades elem;
    //vector<StudentGrades> data;
    vector<StudentGrades> outputs;

    while(scanf("%d", &N) != EOF && N > 0 && scanf("%d %d", &M, &grade_line) != EOF)
    {
        question_grades.clear();
        //data.clear();
        outputs.clear();
        int points, num;

        for(int i=1; i<=M; ++i)
        {
            scanf("%d", &points);
            question_grades[i] = points;
        }
        while(N--)
        {
            int grade = 0;
            scanf("%s", elem.sno); 
            scanf("%d", &num); 
            for(int i=0; i<num; ++i)
            {
                scanf("%d", &(elem.tests[i]));
                grade += question_grades.at(elem.tests[i]); 
            }
            elem.grades = grade;
            //data.push_back(elem);
            if(elem.grades >= grade_line)
                outputs.push_back(elem);
        }

        std::sort(outputs.begin(), outputs.end(), 
                [ ] (const StudentGrades& a, const StudentGrades& b)
                { return a.grades == b.grades ? strcmp(a.sno, b.sno) : a.grades > b.grades;});
        
        printf("%lu\n", outputs.size());
        for(const auto& elem : outputs)
            printf("%s %d\n", elem.sno, elem.grades);
    }
    return 0;    
}

