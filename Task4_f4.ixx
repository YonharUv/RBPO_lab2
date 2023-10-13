module;
#include <math.h>
export module student_1bib21040.Lab2.Variant6.Task4:f4;
import :a;

namespace RBPO::Lab2::Variant6::Task4 {
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