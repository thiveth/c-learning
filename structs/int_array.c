#include <stdio.h>
#include <stdlib.h>

struct intArray {
    size_t size;
    int *array;
};


struct intArray createArray(size_t size){
    struct intArray arr;

    arr.size = size;
    arr.array = calloc(size, sizeof(int));

    if (arr.array == NULL){
        printf("Failed to allocate memory!\n");
        exit(-1);
    }

    return arr;
}
void printIntArray(struct intArray *arr){
    if (arr->size == (size_t) 0){
            printf("No array to display.");
            exit(1);
        }
    else    
    {
        printf("[");
            for (size_t i = 0; i < arr->size; i++){
                printf("%d", arr->array[i]);
                if (i < arr->size - 1){
                    printf(", ");
                }
            }
        printf("]\n");
    }

}

void deleteArray(struct intArray *arr){
    if (arr != NULL && arr->array != NULL){
        free(arr->array);
        arr->array = NULL;
        arr->size = 0;
        printf("Memory freed!\n");
    }
    else {
        printf("Memory already freed.\n");
    }
}

void append(struct intArray *arr, int *values, int cnt){
    
    int oldEnd = arr->size;
    if (arr->array == NULL){
        printf("Cannot allocate new memory\n");
    }
    else{
        arr->array = realloc(arr->array,  (arr->size + cnt) * sizeof(int));
        arr->size += cnt;
    }

    int counter = 0;
    for(int i = oldEnd; i < oldEnd + cnt; i++){
        arr->array[i] = values[counter];
        counter++;
    }

}

int main(){

    struct intArray arrayOf5 = createArray(5);
    int array[] = {1, 2, 3};
    int array2[] = {33, 78, 99, 1000};
    int size = sizeof(array) / sizeof(array[0]);
    printIntArray(&arrayOf5);
    //deleteArray(&arrayOf5);
    //printIntArray(&arrayOf5);
    append(&arrayOf5, array, size);
    printIntArray(&arrayOf5);
    append(&arrayOf5, array2, sizeof(array2) / sizeof(array2[0]));
    printIntArray(&arrayOf5);
    delete(&arrayOf5);
    return 0;
}