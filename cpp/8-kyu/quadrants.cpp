#include <vector>

int quadrant(int x, int y) {
	std::vector<int> quadrants;
	if (x > 0) {
		quadrants.push_back(1);
		quadrants.push_back(4);
	}
	else {
		quadrants.push_back(2);
		quadrants.push_back(3);
	}
	if (y > 0) {
		return quadrants[0];
	}
	else {
		return quadrants[1];
	}
}
