module;
#include <math.h>
export module student_1bib21040.Lab2.Variant6.Task1;

namespace RBPO::Lab2::VariantX::Task1 {
    export double f1(double x) {
        return cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
    }

    export double f2_1(double x) {
        return (x <= 3) ? (x * x + 3 * x + 9) : (sin(x) / (x * x - 9));
    }

    double a(int i) {
        return pow(-1, i) * (1 - pow((i + 1), 2) / pow((i + 2), 2));
    }

    export double f3(int n) {
        double sum = 0.0;
        for (int i = 0; i <= n; ++i) {
            sum += a(i);
        }
        return sum;
    }

    export double f4(double epsilon) {
        double sum = 0.0, term = 0.0, curr = a(0);
        for (int i = 1; (fabs(curr - term) > epsilon); ++i) {
            sum += curr;
            term = curr;
            curr = a(i);
        }
        return sum;
    }
}