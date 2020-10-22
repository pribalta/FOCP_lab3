#include <iostream>
#include <vector>
#include <array>

struct Matrix2D {
    std::vector<std::vector<int>> contents;

    void add(Matrix2D other) {
        if (other.rows() == rows() && other.columns() == columns()) {

            for (int i = 0; i < rows(); i++){
                for (int j = 0; j < columns(); j++) {
                    contents[i][j] += other.contents[i][j];
                }
            }  

        } else {
            std::cout << "Dimensions must match!" << std::endl;
        }

    }

    int rows() {
        return contents.size();
    }

    int columns() {
        return contents[0].size();
    }

    void input_matrix() {
        int columns, rows;

        std::cout << "Number of rows: "<< std::endl;
        std::cin >> rows;

        std::cout << "Number of columns: "<< std::endl;
        std::cin >> columns;

        for (int i = 0; i < rows; i++){
            std::vector<int> row;
            int tmp;
            std::cout << "Adding a row with " << columns << " columns" << std::endl;
            for (int j = 0; j < columns; j++) {
                std::cout << "Introduce value: "<< std::endl;
                std::cin >> tmp;
                row.push_back(tmp);
            }

            contents.push_back(row);
        }
    }

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
    Matrix2D a, b;

    std::cout << "Introduce data for matrix a:" << std::endl;

    a.input_matrix();

    std::cout << "Introduce data for matrix b:" << std::endl;

    b.input_matrix();

    std::cout << "Print matrix a:" << std::endl;
    a.print();
    std::cout << "Print matrix b:" << std::endl;
    b.print();

    std::cout << "Adding b to a:" << std::endl;
    a.add(b);
    a.print();

    return 0;
}