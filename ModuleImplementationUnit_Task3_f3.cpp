#include <math.h>
module student_1bib21040.Lab2.Variant6.Task3;

double RBPO::Lab2::Variant6::Task3::f3(int n)
{
    double sum = 0.0;
    int i = 0;
    do {
        sum += a(i);
        i++;
    } while (i <= n);
    return sum;
}