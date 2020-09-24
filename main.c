#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char empname[20];
    int empid;
    int experience;
    float salary;

};
int main()
{
    struct employee e[5];
    int i=0,n=5;
    for(i=0;i<5;i++)
    {
        printf("enter the employee name,emp id,experience in years and salary\n");
        scanf("%s",&e[i].empname);
        scanf("%d",&e[i].empid);
        scanf("%d",&e[i].experience);
        scanf("%f",&e[i].salary);


    }
    for(i=0;i<5;i++)
    {
        printf("%s  %d %d %f\n",e[i].empname,e[i].empid,e[i].experience,e[i].salary);

    }
    return 0;

}
