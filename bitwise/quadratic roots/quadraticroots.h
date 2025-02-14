#ifndef QUADRATICROOTS_H_
#define QUADRATICROOTS_H_
typedef struct {
    double x1;
    double x2;
    int norealroots;
}QuadraticRootsResult_t;

QuadraticRootsResult_t  findroots(double a, double b, double c);

#endif