#include <cstdio>
#include <cstdlib>

// FIXED: the length of array name and sex should be larger
struct student{
    int id;
    char name[100];
    char sex[20];
    int year_old;
};


int main()
{
    int N, M, query;
    student *buffer;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &M);
        student *students_info[25] = {nullptr};
        while(M--){ 
            buffer = (student*) malloc(sizeof(student));
            scanf("%d %s %s %d", &(buffer->id), buffer->name, buffer->sex, &(buffer->year_old)); 
            students_info[buffer->id] = buffer; 
        }

        scanf("%d", &query);
        if(students_info[query] == nullptr){
            //printf("\n");
            continue;
        }
        buffer = students_info[query];
        printf("%d %s %s %d\n", buffer->id, buffer->name, buffer->sex, buffer->year_old);
            
    }
    return 0;
}
