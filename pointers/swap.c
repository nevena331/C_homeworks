#include <stdio.h>

void swap(void* ptr1, void* ptr2){
    int temp = *(int*)ptr1;
    *(int*) ptr1 = *(int*)ptr2;
    *(int*) ptr2 = temp;
}

int main(){
    int a = 5; 
    int b = 7; 

    int* ptra = &a;
    int* ptrb = &b;

    printf("a = %d\nb = %d\n", a, b);

    swap(ptra, ptrb);

    printf("a = %d\nb = %d\n", a, b);

    return 0;
}