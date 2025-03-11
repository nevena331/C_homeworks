#include <stdio.h>
#include <stdlib.h>

void print_grades(float* grades, unsigned int grades_count){
    printf("Grades:\n");
    for(int i = 0; i < grades_count; i++){
        printf("%.2f, ", grades[i]);
    }
    printf("\n");
}

float avg_grade(float* grades, unsigned int grades_count){
    float sum = 0;
    for(int i = 0; i < grades_count; i++){
        sum += grades[i];
    }
    float avg_grade = sum / grades_count;
    return avg_grade;

}

int add_grades(float* grades, unsigned int grades_count){
    unsigned int num_of_grades_to_add;
    printf("How many grades would you like to add? ");
    scanf("%u", &num_of_grades_to_add);
    grades = (float *)realloc(grades, (grades_count + num_of_grades_to_add) * sizeof(float));
    if (grades == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    for (int i = 0; i < num_of_grades_to_add; i++){
        printf("Enter grade %d: ", i + grades_count);
        scanf("%f", &grades[i + grades_count]);
    }
    grades_count += num_of_grades_to_add;
    return grades_count;
}

int remove_last_grade(float* grades, unsigned int grades_count){
    grades = realloc(grades, (grades_count - 1)*sizeof(float));
    grades_count--;
    return grades_count;
}

int main(){
    unsigned int grades_count;
    printf("Enter grades count: ");
    scanf("%u", &grades_count);
    float* grades = (float *)malloc(sizeof(float)*grades_count);
    
    if(grades == NULL){
        printf("Error allocating memory\n");
        exit(1);
    }
    
    for (int i = 0; i < grades_count;i++){
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
    int option;
    while (1){
        printf("\nchoose an opition: \n(1)add grades\n(2)remove last grade\n(3)print grades\n(4)get average grade\n(5)exit\n");
        scanf("%d", &option);
        switch(option){
            case 1: grades_count = add_grades(grades, grades_count);break;
            case 2: grades_count = remove_last_grade(grades, grades_count);break;
            case 3: print_grades(grades, grades_count);break;
            case 4: printf("average grade: %.2f\n", avg_grade(grades, grades_count));break;
            case 5: free(grades);return 0; break;
            default: printf("invalid option number. Try again\n");break;
        }
    }
    free(grades);    
    return 0;
}