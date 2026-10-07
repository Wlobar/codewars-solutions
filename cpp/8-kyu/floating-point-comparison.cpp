#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {

	//We check whether the distance between the two numbers is within tolerance

	return std::abs(a - b) <= 0.001;
}