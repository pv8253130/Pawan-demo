#include <string.h>
#include<stdio.h>
struct employee
{
    char name[100];
    int age;
    float salary;
     int  employeeid;
};
int main(){ 
int n;
printf("enter the n number:");
scanf("%d",&n);
struct employee e[n];
for(int i=0;i<n;i++)
{
    getchar();
    printf("enter the name:");
    fgets(e[i].name,sizeof(e[i].name),stdin);

    e[i].name[strcspn(e[i].name,"\n")]='\0';

    printf("enter the age=");
    scanf ("%d",&e[i].age);
     
    printf("enter the salary=");
    scanf("%f",&e[i].salary);
    
    printf("enter the employeeid=");
    scanf("%d",&e[i].employeeid);
    }
    printf("name \n");
    printf("age\n");
    printf("salary\n");
    printf("emp id\n");
    for(int i=0;i<n;i++);
    {
    printf("%s\n",e[i].name);
    printf("%d\n",e[i].age);
    printf("%f\n",e[i].salary);
    printf("%d\n",e[i].employeeid);
    }
return 0;
}