#include <tuple>

std::tuple<int, int, int> quadratic (int x1, int x2) {

	//(x-x1) * (x-x2) = x^2 - x*x1 - x*x2 + x1*x2 = x^2 - (x1+x2)x + x1*x2
	//b = - (x1 + x2)
	//c = x1 * x2

	return { 1, -x1-x2, x1*x2 };
}
