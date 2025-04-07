#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}
void printArray(int arr[], int n)
{
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}