#include <stdio.h>
#include <stdlib.h>

#define IF_ERROR_ALLOCATING(PTR_NAME)\
if (PTR_NAME == NULL){\
    printf("Error allocating memory.\n");\
    exit(1);\
}

int add_students(char**students, int num_of_students, float** grades, char** subjects, int num_of_subjects){
    int num_of_students_to_add;
    printf("Number of students to add: ");
    scanf ("%d", &num_of_students_to_add);
    num_of_students += num_of_students_to_add;
    
    students = (char**)realloc(students, num_of_students * sizeof(char*));
    IF_ERROR_ALLOCATING(students);
    
    grades = (float**)realloc(grades, num_of_students * sizeof(float*));
    IF_ERROR_ALLOCATING(grades);

    for(int i = num_of_students - num_of_students_to_add; i < num_of_students; i++){
        printf("\nEnter name of student %d: ", i + 1);
        students[i] = malloc(16);
        IF_ERROR_ALLOCATING(students[i]);
        scanf("%s", students[i]);
        grades[i] = malloc(num_of_subjects * sizeof(float));
        for(int j = 0; j < num_of_subjects; j++){
            printf("\nEnter %s's grade in %s: ", students[i], subjects[j]);
            IF_ERROR_ALLOCATING(grades);
            scanf("%f", &grades[i][j]);
            printf("%.2f\n", grades[i][j]);
        }
    }
    return num_of_students;
}

void print_log(char**students, int num_of_students, float** grades, char** subjects, int num_of_subjects){
    printf("%-17s| ", "student");
    for(int i = 0; i < num_of_subjects; i++){
        printf("%-17s| ", subjects[i]);
    }
    printf("\n");

    for (int i = 0; i < num_of_students; i++){
        printf("%-17s| ", students[i]);
        for(int j = 0; j < num_of_subjects; j++){
            printf("%-17.2f| ", grades[i][j]);
        }
    printf("\n");
    }
}

int main(){

    unsigned int num_of_subjects;
    printf("enter number of subjects: ");
    scanf("%u", &num_of_subjects);
    char **subjects = (char**)malloc(num_of_subjects* sizeof(char*));
    IF_ERROR_ALLOCATING(subjects);
    for(int i = 0; i < num_of_subjects; i++){
        char last_subject[16];
        subjects[i] = malloc(16);
        IF_ERROR_ALLOCATING(subjects[i]);
        printf("enter subject %d: ", i + 1);
        scanf("%s", subjects[i]);
    }


    char **students = (char**)malloc(0);
    int num_of_students = 0;
    IF_ERROR_ALLOCATING(students);

    float** grades = (float**)malloc(0);
    IF_ERROR_ALLOCATING(grades);

    int option;
    while (1){
        printf("\n\nchoose an option: \n(1)add students\n(2)print log\n(3)exit\n");
        scanf("%d", &option);
        switch(option){
            case 1: 
                num_of_students = add_students(students, num_of_students, grades, subjects, num_of_subjects);    
                break;
            case 2: 
                print_log(students, num_of_students, grades, subjects, num_of_subjects);    
                break;
            case 3: 
                free(subjects);
                free(grades);
                free(students);
                return 0; 
                break;
            default: 
                printf("invalid option number. try again\n");
                break;
        }
    }

    return 0;
}