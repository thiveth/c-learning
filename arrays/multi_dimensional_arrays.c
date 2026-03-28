#include <stdio.h>

void combineArrays(int *arr1, int*arr2, int tSize, int result[][tSize]){

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < tSize; j++){
            if(i==0){
                result[i][j] = arr1[j];
            }
            else {
                result[i][j] = arr2[j];
            }
        }
    }

}



int main(){

    int physicsGrades[] = {87, 92, 95, 74, 68};
    int mathGrades[] = {63, 98, 99, 75, 79};
    int tSize = sizeof(physicsGrades) / sizeof(physicsGrades[0]);

    // int *arrays[] = {physicsGrades, mathGrades};

    // Want
    /*int combinedArray[2][5] = {{87, 92, 95, 74, 68},
                                {63, 98, 99, 75, 79}}*/

    int combinedArray[2][tSize];


    combineArrays(physicsGrades, mathGrades, tSize, combinedArray);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < tSize; j++){
            printf("%d", combinedArray[i][j]);

            if (j < tSize - 1){
                printf(", ");
            }
        }
        printf("\n");
    }

    

    return 0;
}
