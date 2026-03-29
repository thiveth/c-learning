#include <stdio.h>
#include <string.h>

#define SUBJECTS 5

struct Student{
    char name[50];
    int grades[SUBJECTS];
    float average;
};

float averageGrade(int arr[], int size){

    float temp = 0;

    for (int i = 0; i < size; i++){
        temp += arr[i];
    }

    return temp / size;

}

int main(){

    struct Student s1;

    strcpy(s1.name, "Johnathan Majors");
    s1.grades[0] = 82;
    s1.grades[1] = 98;
    s1.grades[2] = 87;
    s1.grades[3] = 76;
    s1.grades[4] = 82;


    struct Student s2;
    strcpy(s2.name, "Daniel Loafman");
    s2.grades[0] = 56;
    s2.grades[1] = 73;
    s2.grades[2] = 77;
    s2.grades[3] = 89;
    s2.grades[4] = 82;

    struct Student s3;
    strcpy(s3.name, "Henry Robinson");
    s3.grades[0] = 62;
    s3.grades[1] = 83;
    s3.grades[2] = 94;
    s3.grades[3] = 90;
    s3.grades[4] = 71;

    s1.average = averageGrade(s1.grades, SUBJECTS);
    s2.average = averageGrade(s2.grades, SUBJECTS);
    s3.average = averageGrade(s3.grades, SUBJECTS);
    
    // Student 1
    printf("%s\n", s1.name);
    printf("Grades: ");
    for(int i = 0; i < SUBJECTS; i++){
        printf("%d ", s1.grades[i]);
    }
    printf("\nAverage: %.2f\n", s1.average);
    
    //Student 2
    printf("%s\n", s2.name);
    printf("Grades: ");
    for(int i = 0; i < SUBJECTS; i++){
        printf("%d ", s2.grades[i]);
    }
    printf("\nAverage: %.2f\n", s2.average);

    // Student 3
    printf("%s\n", s3.name);
    printf("Grades: ");
    for(int i = 0; i < SUBJECTS; i++){
        printf("%d ", s3.grades[i]);
    }
    printf("\nAverage: %.2f\n", s3.average);


    return 0;
}