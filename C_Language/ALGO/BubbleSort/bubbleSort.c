#include <stdio.h>
#include <stdlib.h>



void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubbleSort(int arr[], int count){

    for (int i = 0; i<count; i++){
        for (int j = 0; j < (count - i)-1; j++)
        {
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
            /* code */
        }
        
    }
    for (int c = 0; c < count; c++)
    {
        printf("%d |", arr[c]);
        /* code */
    }
    return 0;
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,43,23,56,13,43,54};
    int count = 7; 
    bubbleSort(arr, count);
    
    return 0;
}
