#ifndef TRANSFORMATION
#define TRANSFORMATION

typedef struct transformation{
    long result;
    char error[100];
} transformation_t;

transformation_t str_to_long(char* str);   

#endif