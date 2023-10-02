#include<stdio.h>

typedef struct{
    char name[30];
    int id;
    float salary;
}employee;

void get_emp_details(employee *emp){
    printf("Enter name : "); gets(emp->name);
    printf("Enter id  : "); scanf("%i", &emp->id);
    printf("Enter salary  : "); scanf("%f", &emp->salary);
    scanf("%c");
}


int main(){

    int n;
    printf("Enter number of employees : "); scanf("%i", &n);scanf("%c");
    employee emps[n];

    for(int i=0;i<n;i++){
        get_emp_details(&emps[i]);
        printf("\n");
    }
    
    printf("Details :\n\n");

    for(int i=0;i<n;i++){
        printf("Sl No %i :\n\tName : %s\n\tId : %i\n\tSalary : %.2f\n\n", i+1,emps[i].name,emps[i].id,emps[i].salary);
    }

}