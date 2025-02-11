#include <iostream>

int main() {
    int height = 13;
    int width = 10;

    for (int i = 0; i < height; ++i) {
        // Letter T
        for (int j = 0; j < width; ++j) {
            if (i == 0 || j == width / 2) {
                std::cout << "@";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "  "; // Space between letters

        // Letter E
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || i == height / 2 || j == 0) {
                std::cout << "#";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "  "; // Space between letters

        // Letter Y
        for (int j = 0; j < width; ++j) {
            if ((i < height / 2 && (j == 0 || j == width - 1)) || (i >= height / 2 && j == width / 2) || (i == height / 2 && (j == 0 || j == width - 1))) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
    
}