#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
    float length;
    float width;
public:
    void setLength(float l);
    float getLength();
    void setWidth(float w);
    float getWidth();
    float calculateArea();
};

#endif // RECTANGLE_H

#include <iostream>


int main() {
    Rectangle rect;
    float length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    rect.setLength(length);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    rect.setWidth(width);

    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}


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