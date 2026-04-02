#include <stdio.h>


int main(){

    FILE *f = fopen("test.txt", "r");
    
    if (f == NULL){
        printf("Error opening file..");
        return 1;
    }

    char name[50];
    int g1, g2, g3, g4, g5;
    float avg;

    while(fscanf(f, "%s", name)==1) {
        
        printf("%s\n", name);
    }
    
    fclose(f);
    
    
    
    
    
    
    
    
    return 0;
}