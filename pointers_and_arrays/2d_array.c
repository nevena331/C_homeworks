#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_COLOMNS 4

void print_2d_array(int (*arr)[NUMBER_OF_COLOMNS], int rowsCount) {
    printf("2d array: \n");
    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < NUMBER_OF_COLOMNS; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("\n");
}

int main(){
    int arr[3][NUMBER_OF_COLOMNS] = {{1, 2, 3, 4},
                                     {5, 6, 7, 8}, 
                                     {1, 2, 3, 4}};

    int arr1[2][NUMBER_OF_COLOMNS] = {{1, 2, 3, 4},
                                     {5, 6, 7, 8}};

    print_2d_array(arr, 3);
    print_2d_array(arr1, 2);

    return 0;
}