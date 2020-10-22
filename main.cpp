#include <iostream>
#include <vector>
#include <array>

struct Matrix2D {
    std::vector<std::vector<int>> contents;

    void print() {
        std::cout << "Contents of the matrix:" << std::endl;

        int rows = contents.size();
        int cols = contents[0].size();

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++) {
                std::cout << contents[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    // A 3X3, B 3x3

    // Declare the matrices
    Matrix2D a;
    Matrix2D b;

    // Initialize the contents
    a.contents = {{1,2,3}, {4,5,6}, {7,8,9}};
    b.contents = {{9,8,7}, {6,5,4}, {3,2,1}};

    // A = [ 1, 2, 3
    //       4, 5, 6
    //       7, 8, 9]

    // B = [ 9, 8, 7
    //       6, 5, 4
    //       3, 2, 1]

    a.print();
    b.print();

    return 0;
}