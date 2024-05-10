#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
    float length;
    float width;
public:
    Rectangle();
    Rectangle(float l, float w); // Overloaded constructor
    void setLength(float l);
    float getLength();
    void setWidth(float w);
    float getWidth();
    float calculateArea();
};

#endif // RECTANGLE_H

Rectangle::Rectangle() : length(0), width(0) {}

Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

void Rectangle::setLength(float l) {
    length = l;
}

float Rectangle::getLength() {
    return length;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::calculateArea() {
    return length * width;
}
#include <iostream>

int main() {
    float length, width;

    // Create an instance of Rectangle using default constructor
    Rectangle rect1;

    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    rect1.setLength(length);

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;
    rect1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    // Create another instance of Rectangle using overloaded constructor
    std::cout << "\nEnter the length of the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    Rectangle rect2(length, width);

    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}