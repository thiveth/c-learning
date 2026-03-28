#include <stdio.h>

void combineArrays(int *arrays[], int numArrays, int tSize, int result[][tSize]){

   for (int i = 0; i < numArrays; i++){
            for(int j = 0; j < tSize; j++){
                result[i][j] = arrays[i][j];
        }
   }

}



int main(){

    int physicsGrades[] = {87, 92, 95, 74, 68};
    int mathGrades[] = {63, 98, 99, 75, 79};
    int biologyGrades[] = {58, 98, 100, 62, 74};

    int tSize = sizeof(physicsGrades) / sizeof(physicsGrades[0]);

    int *arrays[] = {physicsGrades, mathGrades, biologyGrades};
    int numArrays =  sizeof(arrays) / sizeof(arrays[0]); // size of a pointer = 8 bytes so 16 / 8 = 2 or num of arrays 


    int combinedArray[numArrays][tSize];
    

    combineArrays(arrays, numArrays, tSize, combinedArray);

    for(int i = 0; i < numArrays; i++){
        for(int j = 0; j < tSize; j++){
            printf("%d", combinedArray[i][j]);
            
            // Print Formatting
            if (j < tSize - 1){
                printf(", ");
            }
        }
        
        // Print new line after each iteration
        printf("\n");
    }

    

    return 0;
}
