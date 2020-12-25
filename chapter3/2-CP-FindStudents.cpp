#include <cstdio>
#include <cstdlib>
#include <cstring>
// FIXED: fix input data not completed solved.
// array name and sex should be larger.

struct student{
    int id;
    char name[100];
    char sex[20];
    int year_old;
};


int main()
{
    int N, M;
    int who;
    student *buffer;
    
    scanf("%d", &N); 
    //FIXED : multi inputs 
    while(N--){
        student *students_info[24] = {nullptr};
        scanf("%d", &M);

        while(M--){ 
            buffer = (student*) malloc(sizeof(student));
            scanf("%d %s %s %d", &(buffer->id), buffer->name, buffer->sex, &(buffer->year_old)); 
            students_info[buffer->id] = buffer; 
        }
        
       // query format is too tricky
       //memset(who, ' ', sizeof(who));
       scanf("%d", &who);
       if(students_info[who] == nullptr){
           printf("No Answer!\n");
           continue;
       }
       buffer = students_info[who];
       printf("%d %s %s %d\n", who, buffer->name, buffer->sex, buffer->year_old);
    }
    
    
    return 0;
}
