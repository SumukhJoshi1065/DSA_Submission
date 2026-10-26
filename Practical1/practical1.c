#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void enterstring(char input[]);
int palindrome(char input[]);
void copy(char input[] , char output[]);
int stringlength(char input[]);
void substring(char input[], char output[]);
void reverse(char input[], char output[]);
int main()
{
int choice, c ,l ;
char str[100], output[100];
//Initialize();
do
{
printf("\n\n\t\tSTRING OPERATIONS");
printf("\n------------------------------------------");
printf("\n1. Insert");
printf("\n2. Palindrome");
printf("\n3. Copy");
printf("\n4. Stringlength");
printf("\n5. Substring");
printf("\n6. Reverse");
printf("\n7. Exit");
printf("\n\nEnter your choice : ");
scanf("%d", &choice);
switch(choice)
{

case 1:
enterstring(str);
printf("You entered: %s\n", str);
break;
case 2:
c = palindrome(str);
if (c==1)
printf("The string is palindrome");
else
printf("The string is not palindrome");
break;
case 3:
copy(str,output);
printf("The copied string is: %s\n",output);
break;
case 4:
l = stringlength(str);
printf("The string length is: %d ", l);
break;
case 5:
substring(str,output);
break;
case 6:
reverse(str,output);
break;
case 7:
return 0;
default:
printf("\nInvalid Choice!");
}
}while(1);
return 0;
}
void enterstring(char input[])
{
printf("Enter the string: ");
scanf("%99s", input);
}

int palindrome(char input[])
{
int i= 0, j= 0;
while (input[j]!='\0')
j++;
j--;
while(i<j)
{
if(input[i]!= input[j])
return 0;
i++;
j--;
}
return 1;
}
void copy (char input[],char output[])
{
int i ;
for(i=0;input[i]!='\0';i++)
{
output[i]=input[i];
}
output[i]='\0';
}
int stringlength(char input[])
{
int i=0;
while(input[i]!= '\0')
{
i++;
}
return i;
}
void substring(char input[], char output[])
{
int n,i=0,p;
printf("enter the index from which you want the substring: ");
scanf("%d",&p);
n = stringlength(input);
if(p>=n);

{
printf("invalid");
}
while(input[p+i] != '\0')
{
output[i]= input[p+i];
i++;
}
output[i] = '\0';
printf("the substring is: %s",output);
}
void reverse(char input[], char output[])
{
int i,n=0;
while(input[n] != '\0')
{
n++;
}
for(i=0; i<n;i++)
{
output[i] = input[n-1-i];
}
printf("The reverse is: %s",output);
}
