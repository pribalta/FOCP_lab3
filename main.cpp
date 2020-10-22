#include <cstdlib>
#include <iostream>

// Define a struct ---> NEW TYPE
struct Point2D {
    double x;
    double y;
};

// INPUT ---> {????} ---> OUTPUT
//     {initialize struct}

Point2D create_point() {
    Point2D tmp;
    tmp.x = rand() % 10;  
    tmp.y = rand() % 10; 

    return tmp;
}

void initialize_in_place(Point2D& point) {
    point.x = rand() % 10;  
    point.y = rand() % 10; 

    std::cout << "Value of X: " << point.x << std::endl;
    std::cout << "Value of Y: " << point.y << std::endl;
}

int main() {
    // Declare a variable with our struct
    Point2D mypoint = create_point();

    // Print its contents
    // std::cout << "Value of X: " << mypoint.x << std::endl;
    // std::cout << "Value of Y: " << mypoint.y << std::endl;

    // Declare a variable with our struct
    Point2D empty_point;
    initialize_in_place(empty_point);

    // Print its contents
    std::cout << "Value of X: " << empty_point.x << std::endl;
    std::cout << "Value of Y: " << empty_point.y << std::endl;

    return 0;
}