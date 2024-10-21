#include <stdio.h>

int main()
{

int arr[]={2,3,7,6,5,8};
int length=sizeof(arr)/sizeof(arr[0]);
// for(length=0;arr[length]!=NULL;length++);

// Reverse a the string : two pointer approach
int left=0,right=length-1;

while (left<right)
{
arr[left]=arr[left]+arr[right];
arr[right]=arr[left]-arr[right];
arr[left]=arr[left]-arr[right];

left++;
right--;
}

// Display the reversed array
printf("Reversed Array : ");
for(int i=0;i<length;i++)
{
printf("%d ",arr[i]);
}

return 0;

}
