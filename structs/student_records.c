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

void printStudent(struct Student student){
    printf("\n%s\n", student.name);
    printf("Grades: ");
    for (int i = 0; i < SUBJECTS; i++){
        printf("%d ", student.grades[i]);
    }
    printf("\nAverage: %.2f\n", student.average);
}




int main(){


    struct Student students[] = {{"Johnathan Majors", {82, 98, 87, 76, 82}, 0},
                                {"Daniel Loafman", {56,73,77,89,82}, 0},
                                {"Henry Robinson", {62, 83, 94, 90, 71}, 0}};

    
    int numOfStudents = sizeof(students) / sizeof(students[0]);
    
    for (int i = 0; i < numOfStudents; i++){
        students[i].average = averageGrade(students[i].grades, SUBJECTS);
    }
    

    for (int i = 0; i < numOfStudents; i++){
        printStudent(students[i]);
    }

    float max = students[0].average;
    int index = 0;

    for (int i = 1; i < numOfStudents; i++){
        if (students[i].average > max){
            max = students[i].average;
            index = i;
        }
    }


    printf("\nTop Student: %s (%.2f%%)",students[index].name, students[index].average);

    return 0;
}
