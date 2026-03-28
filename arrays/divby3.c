#include <stdio.h>
#include <stdlib.h>

int *divisibleByThree(int size, int *arr, int *new_size){
	// create variable to hold count of nums div by 3
	int count = 0;

	// create for loop to loop through original array and update count for each div 3 result 
	for(int i = 0; i < size; i++){
		if (*(arr + i) % 3 == 0){
			count++;
		}
	}

	// create new array to hold div 3 ints
	int *new_array = calloc(count, sizeof(int));

	// condition if memory allocation fails
	if(new_array == NULL){
		return NULL;
	}

	// create counter to make sure new_array[i] is set in correct spot
	int j = 0;

	// put div by 3 ints into new array
	for(int i = 0; i < size; i++){
		if(*(arr + i) % 3 == 0){
			// assign (arr[i] div by 3) into (new_array[j] while j only updates when i is div by 3 so we dont skip any spots in array)
			*(new_array + j) = *(arr + i);
				j++;
		}
	}

	// return new size to main
	*new_size = count;

	return new_array;


}

int main() {
	
	// Pointer to change size in main from func
	int size = 30;
	int array[size];
	int new_size;

	for (int i = 0; i < size; i++){
		array[i] = i;
	}

	/*for(int i = 0; i < size; i++){
		printf("%d\n", array[i]);
	}*/

	int *a = divisibleByThree(size, array, &new_size);

	if (a == NULL){
		printf("Memory allocation failed\n");
		return 1;
	}


	for (int i = 0; i < new_size; i++){
		printf("%d\n", a[i]);
	}

	free(a);
	return 0;
}