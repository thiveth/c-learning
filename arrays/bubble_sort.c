#include <stdio.h>
#include <stdlib.h>


void *sortArray(int size, int *arr){

    
    // allocate memory for sorted array
    // int *sorted = calloc(size, sizeof(int));



    // create a var to hold values temporarily while swapping
    int temp;
    
    // create counter for new elements in sorted array
    // int k = 0;
    
    // create for loop (outer: i)
    for(int i = 0; i < size; i++){
        // create for loop (inner: j)
        // loop while j < size - i - 1 so we don't keep checking values that are already sorted [e.g,] i = 0 largest is already sorted so test j < size - 0 - 1 | j < 3 (j+1 = 3) tests to see if j[2] is > j[3] 
        // and swaps if true doesn't need to test after that because that element is already in sorted position
        for(int j = 0; j < size - i - 1; j++){
            // write instructions for inner loop to handle sorting -- (j < size - 1) since we will be testing [j+1]
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }



}


int main() {

    int array[] = {60, 72, 52, 55};
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++){
        printf("%d  ", array[i]);
    }

    printf("\n");

    // Sorted Array

    sortArray(size, array);
    for(int i = 0; i < size; i++){
        printf("%d  ", array[i]);
    }


    return 0;
}
