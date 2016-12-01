#ifndef GUARD_GRADE_H
#define GUARD_GRADE_H

#include <vector>
#include "student_info.h"

double grade(double, double, double);
double grede(double, double, const std::vector<double>&);
double grade(const student_info&);

#endif