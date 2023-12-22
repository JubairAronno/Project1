#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
int rollnumber;
char name[111];
float cgpa;
char gender;
struct student* next;
};

int boycount=0;
int girlcount=0;

void addstudent(struct student**head,int rollnumber,const char*name,float cgpa,char gender)
{
    for(struct student*current=*head;current!=NULL;current=current->next)
    {
        if(current->rollnumber==rollnumber)
        {
            printf("Roll number %d already exists.Please enter another roll.\n",rollnumber);
            return;
        }
    }

    struct student* newstudent=(struct student*)malloc(sizeof(struct student));

    if (newstudent==NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
}


