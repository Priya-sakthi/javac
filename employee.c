#include<stdio.h>
#include<conio.h>
#include<string.h>

//Declaration of structure org
struct org
{
char name[30];
int emp_id,salary,contact;
};
void main()
{

//declaration of org member as array
struct org employee[20];
int n,i;
printf("\nEnter the number of employeed in your organization(<=20):");
scanf("%d",&n);

//enter values using for loop
for(i=0;i<n;i++)
{
printf("\nEnter Person %d\n Name :",i+1);
scanf("%s",&employee[i].name);
printf("\nEmployee Id :");
scanf("%d",&employee[i].emp_id);
printf("\nEmployee Salary :");
scanf("%d",&employee[i].salary);
printf("\nEmployee contact no :");
scanf("%d",&employee[i].contact);
}

//printing employee information
printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
printf("\nPerson %d\n Name : %s",i+1,employee[i].name);
printf("\nEmployee Id : %d",employee[i].emp_id);
printf("\nEmployee Salary : %d",employee[i].salary);
printf("\nEmployee contact no : %d",employee[i].contact);
}
getch();
}
