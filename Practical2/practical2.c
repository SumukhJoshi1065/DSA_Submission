#include <stdio.h>
#include <stdlib.h>
int BS(int arr[], int l, int r, int target);
int main() {
int i=0, s;
printf("Enter the size of array:" );
scanf("%d",&s);
int arr[s];
printf("Enter the elements of array:" ,i+1);
for(i=0;i<s;i++)
{
scanf("%d",&arr[i]);
}
int target;
printf("Enter the number to be searched: ");
scanf("%d", &target);
int n = sizeof(arr[s]) / sizeof(arr[0]);

int Result = BS(arr, 0, s - 1, target);
if (Result == 1) {
printf("The number is found\n");
}
else {
printf("The number is not found\n");
}
return 0;
}
int BS(int arr[], int l, int r, int target) {
if (l > r) {

return 0;
}
int mid = l + (r - l) / 2;
if (arr[mid] == target) {
return 1;
}
else if (arr[mid] > target) {
return BS(arr, l, mid - 1, target);
}
else {
return BS(arr, mid + 1, r,target);
}
}
