#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "student_info.h"

using std::domain_error;
using std::vector;

double  grade(double midterm, double final, const vector<double>& hw)
{
	if (hw.size() == 0)
		throw domain_error("student has no howmwork");
	return grade(midterm, final, median(hw));
}

double grade(const student_info& s)
{
	return grade(s.midterm, s.final, s.homework);
}