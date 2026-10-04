#include <iostream>

bool collinearity(int x1, int y1, int x2, int y2) {

    //// Check vector collinearity by simplifying the equations via cross-multiplication, preventing division by zero

    return (x1 * y2 == x2 * y1);
}

int main(){
    std::cout << std::boolalpha;
    std::cout << "[1;2], [2;4] -> " << collinearity(1, 2, 2, 4) << '\n';
    std::cout << "[5;6], [6;7] -> " << collinearity(5, 6, 6, 7) << '\n';
    return 0;
}