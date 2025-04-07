#include<stdio.h>

int LinearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
    
}
int main()
{
    int arr[] = {2, 3, 45, 56, 57, 78, 9, 67, 786};
    int size = sizeof(arr)/sizeof(int);
    int element = 56;
    int searchIndex = LinearSearch(arr, size, element);
    printf("the element is %d was found at index %d\n",element, searchIndex);
 return 0;
}