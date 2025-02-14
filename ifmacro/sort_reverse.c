#include <stdio.h>
#include <stdbool.h>

#define ARR_SIZE 5

void print_array(int* array){
    for(int i = 0; i < ARR_SIZE; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
}

#ifdef _WIN32

//bubble sort
void swap_int(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int* array){
    bool change = 1;
    while(change == 1){
        change = 0;
        for(int i = 0; i < ARR_SIZE - 1; i++){
            if(array[i] > array[i + 1]){
                swap_int(&(array[i]), &(array[i + 1]));
                change = 1;
            }
        }    
    }
    printf("bubble sort: \n");

}

#elif defined __linux__

//selection sort

void swap_int(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int* array){
    int min;
    int j;
    for (int i = 0; i < ARR_SIZE; i++){
        min = i;
        for(j = i; j < ARR_SIZE; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        swap_int(&(array[i]), (&array[min]));
    }
    printf("selection sort: \n");
}

#elif defined __APPLE__


//insertion sort 
void insert_num(int* array, int i, int j){
    int temp;
    temp = array[i];
    for(; i > j; i--){
        array[i] = array[i - 1];
    }
    array[j] = temp;
    
}

void insertion_sort(int* array){
    int j;
    for(int i = 1; i < ARR_SIZE; i++){
        for(j = i - 1; j >= 0; j--){
            if(array[i] < array[j]){
                continue;
            }else{
                break;
            }
        }
        insert_num(array,i, j + 1);
    }
    printf("insertion sort: \n");
}
#else

void reverse_array(int* array){
    for (int i = 0; i < ARR_SIZE - i - 1; i++){
        int temp = array[i];
        array[i] = array [ARR_SIZE - i - 1];
        array[ARR_SIZE - i - 1] = temp;
    }
    printf("reversed array:\n");
}

#endif


int main(){
    int array[ARR_SIZE] = {5, 12, 67, 89, 3};
    #ifdef _WIN32
        bubble_sort(array);
    #elif defined __linux__
         selection_sort(array);
    #elif defined __APPLE__
        insertion_sort(array);
    #else
        reverse_array(array);
    #endif
    print_array(array);
    return 0;
}

