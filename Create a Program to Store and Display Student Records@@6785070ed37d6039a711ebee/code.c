// Your code here...
#include <stdio.h>
int main(){
struct student {
int roll_no;
char name[80];
float marks;
};
struct student stud[50];
int n,i;
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%d %s %f",&stud[i].roll_no,&stud[i].name,&stud[i].marks);
}
for(i=0;i<n;i++){
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n",stud[i].roll_no,stud[i].name,stud[i].marks);
}
}