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
    char who[6];
    int temp;
    student *buffer;
    
    //FIXED : multi inputs 
    while(~scanf("%d", &N)){
        student *students_info[1010] = {nullptr};
        //for(int i=0; i<200; ++i)
        //    if(students_info[i] == nullptr) printf("INFO nullptr\n");

        while(N--){ 
            buffer = (student*) malloc(sizeof(student));
            scanf("%d %s %s %d", &(buffer->id), buffer->name, buffer->sex, &(buffer->year_old)); 
            students_info[buffer->id] = buffer; 
        }
        
        scanf("%d", &M);
        while(M--){
            // query format is too tricky
            //memset(who, ' ', sizeof(who));
            scanf("%s", who);
            sscanf(who, "%d", &temp); 
            
            if(students_info[temp] == nullptr){
                printf("No Answer!\n");
                continue;
            }
            buffer = students_info[temp];
            printf("%s %s %s %d\n", who, buffer->name, buffer->sex, buffer->year_old);
        }
    }
    
    return 0;
}
