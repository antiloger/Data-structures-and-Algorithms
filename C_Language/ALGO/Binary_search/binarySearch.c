#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int count, int tar){
    int first=0, last = count; 

    while(first <= last){
        int mid = ((last-1)+first)/2; //create a mid value

        
        if (tar == arr[mid]){
            return mid;   //if target index has the value it will return
        }else if(arr[mid]<tar){
            first = mid +1; // add 1 to the mid var. and assing to that value to first(to get the right side value)
        }else{
            last = mid - 1; // add -1 to the mid var. and assing to that value to last(to get the left side value)
        }
    }
    return -1;
}

int binaryRec(int arr[],int first, int last,int tar){

    int mid = (first + (last - 1))/2;

    if (arr[mid] == tar){
        return mid;
    }else if(arr[mid] < tar){
        return binaryRec(arr, mid +1, last, tar);
    }else{
        return binaryRec(arr, first, last -1, tar);
    }

    return -1;
}


int main(int argc, char const *argv[])
{
    int arr[12] = {1, 5, 9, 12, 15, 16, 18, 20, 25, 36, 40, 50}; 
    int count=12, tar = 9;

    //int p = binarySearch(arr, count, tar);
    int p = binaryRec(arr, 0, count, tar);
    printf("target number: %d\n", tar);
    printf("index number: %d\n", p);

    
    return 0;
}
//1 2 3 4 5 6 7 8 9 10 11 12