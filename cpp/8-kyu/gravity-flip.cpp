#include <iostream>
#include <vector>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {

    std::vector<int> result = arr;
    bool is_sorted{ false };

    //The task is simply to sort the values based on the direction input:
    //L (left)  - all the blocks will fall as far left as possible, so we sort in descending order
    //R (right) - the blocks will fall as far right as possible, so the values are ascending

    if (dir == 'R') {

        //This implementation uses Bubble Sort

        while (!is_sorted) {
            is_sorted = true;
            for (int i{}; i < arr.size() - 1; i++) {
                if (result[i] > result[i + 1]) {
                    is_sorted = false;
                    std::swap(result[i], result[i + 1]);
                }
            }
        }
    }
    else if (dir == 'L'){
        while (!is_sorted) {
            is_sorted = true;
            for (int i{}; i + 1 < arr.size(); i++) {
                if (result[i] < result[i + 1]) {
                    is_sorted = false;
                    std::swap(result[i], result[i + 1]);
                }
            }
        }
    }
    return result;
}