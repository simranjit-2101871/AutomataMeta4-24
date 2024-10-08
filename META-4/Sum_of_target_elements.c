/*Write a program to calculate the sum of elements of an array that are equal to the integer entered by the user. The inputs will be the size of the array, elements of the array, and an integer. You have to print the sum calculated after adding all the elements that match the integer entered by the user.
 Input:
Length
Input number
Element
 Output:
Sum of elements the same as the value
 Example:
Input:

8

1 2 3 4 2 5 6 2

2

Output:

6*/
#include<stdio.h>
int sumOfValue(int len, int* arr, int value)
{
    int sum = 0;
    for(int i =0 ; i < len ; i++)
    {
        if(arr[i]==value) sum += value;
    }
    return sum;
}

int main()
{
    int len, value, i;
    int arr[100];
    scanf("%d",&len);
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&value);
    printf("%d",sumOfValue(len,arr,value));
}