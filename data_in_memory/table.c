#include <stdio.h>
#include <limits.h>

int main(){ 

    int integer;
    short shortint;
    long longint;
    long long longlong;

    printf("%-10s %-7s %-20s %-20s %-20s %-23s %-20s\n", "type name", "size[B]", "print form signed", "max signed", "min signed", "print form unsigned", "max unsigned");    
    printf("%-10s %-7ld %-20s %-20hd %-20hd %-23s %-20d\n", "short", sizeof(short), "\%hi or \%hd",SHRT_MAX, SHRT_MIN, "\%hu", USHRT_MAX);
    printf("%-10s %-7ld %-20s %-20d %-20d %-23s %-20u\n", "int", sizeof(int), "\%i or \%d", INT_MAX, INT_MIN, "\%u", UINT_MAX);
    printf("%-10s %-7ld %-20s %-20ld %-20ld %-23s %-20lu\n", "long", sizeof(long), "\%li or \%ld", LONG_MAX, LONG_MIN, "\%lu", ULONG_MAX);
    printf("%-10s %-7ld %-20s %-20lld %-20lld %-23s %-20llu\n", "long long", sizeof(long long), "\%lli or \%lld", LLONG_MAX, LLONG_MIN, "\%llu", ULLONG_MAX);
    
    return 0;
}