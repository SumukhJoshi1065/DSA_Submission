#include <stdio.h>
struct Student
{
int id;
char name[20];
int marks;
};
int main()
{
struct Student s[50], temp;
int n = 0, ch, i, j, id, found;
do
{
printf("\n1.Create\n2.Display\n3.Modify\n4.Search\n5.Sort\n6.Exit");
printf("\nEnter choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("Enter number of students: ");
scanf("%d", &n);
for(i = 0; i < n; i++)

{
printf("Enter ID, Name and Marks: ");
scanf("%d %19s %d",
&s[i].id, s[i].name, &s[i].marks);
}
break;
case 2:
for(i = 0; i < n; i++)
{
printf("\n%d %s %d",
s[i].id, s[i].name, s[i].marks);
}
break;
case 3:
printf("Enter ID to modify: ");
scanf("%d", &id);
found = 0;
for(i = 0; i < n; i++)
{
if(s[i].id == id)
{
printf("Enter new marks: ");
scanf("%d", &s[i].marks);
found = 1;
break;
}
}
if(found == 0)
printf("Record not found");
break;
case 4:
printf("Enter ID to search: ");

scanf("%d", &id);
found = 0;
for(i = 0; i < n; i++)
{
if(s[i].id == id)
{
printf("%d %s %d",
s[i].id, s[i].name, s[i].marks);
found = 1;
break;
}
}
if(found == 0)
printf("Record not found");
break;
case 5:
for(i = 0; i < n - 1; i++)
{
for(j = 0; j < n - i - 1; j++)
{
if(s[j].id > s[j+1].id)
{
temp = s[j];
s[j] = s[j+1];
s[j+1] = temp;
}
}
}
printf("Records sorted by ID");
break;
case 6:
printf("Exiting...");

break;
default:
printf("Invalid choice");
}
} while(ch != 6);
return 0;
}
