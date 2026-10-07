#include <string>
#include <array>

int points(const std::array<std::string, 10>& games) {
    int total_points{};
    for (const std::string& game : games) {
        if (game[0] > game[2]) {
            total_points += 3;
        }
        else if (game[0] == game[2]) {
            total_points ++;
        }
    }
    return total_points;
}