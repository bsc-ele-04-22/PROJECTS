#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square();
        Square(double side);
        double getSideLength() const;
        ~Square();
    };
}

#endif

namespace shapes {
    Square::Square() : sideLength(0) {}

    Square::Square(double side) : sideLength(side) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    Square::~Square() {}
}
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);
        double getBase() const;
        double getHeight() const;
        ~Triangle();
    };
}

#endif

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    Triangle::~Triangle() {}
}
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

namespace shapes {
    class Circle {
    private:
        double radius;

    public:
        Circle();
        Circle(double r);
        double getRadius() const;
        ~Circle();
    };
}

#endif

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(double r) : radius(r) {}

    double Circle::getRadius() const {
        return radius;
    }

    Circle::~Circle() {}
}#ifndef AREA_H
#define AREA_H

namespace shapes {
    class Area {
    public:
        static double calculateSquareArea(const Square& square);
        static double calculateTriangleArea(const Triangle& triangle);
        static double calculateCircleArea(const Circle& circle);
    };
}

#endif

#include <cmath>

namespace shapes {
    double Area::calculateSquareArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    double Area::calculateTriangleArea(const Triangle& triangle) {
        return 0.5 * triangle.getBase() * triangle.getHeight();
    }

    double Area::calculateCircleArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main() {
    char option;

    do {
        std::cout << "Select an option: " << std::endl;
        std::cout << "1. Calculate the area of a square" << std::endl;
        std::cout << "2. Calculate the area of a triangle" << std::endl;
        std::cout << "3. Calculate the area of a circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cin >> option;

        switch (option) {
            case '1': {
                double side;
                std::cout << "Enter side length of the square: ";
                std::cin >> side;

                shapes::Square square(side);
                double area = shapes::Area::calculateSquareArea(square);
                std::cout << "The area of the square is: " << area << std::endl;
            }
            break;
            case '2': {
                double base, height;
                std::cout << "Enter base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter height of the triangle: ";
                std::cin >> height;

                shapes::Triangle triangle(base, height);
                double area = shapes::Area::calculateTriangleArea(triangle);
                std::cout << "The area of the triangle is: " << area << std::endl;
            }
            break;
            case '3': {
                double radius;
                std::cout << "Enter radius of the circle: ";
                std::cin >> radius;

                shapes::Circle circle(radius);
                double area = shapes::Area::calculateCircleArea(circle);
                std::cout << "The area of the circle is: " << area << std::endl;
            }
            break;
            case '4':
                std::cout << "Exiting program..." << std::endl;
                break;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }

    } while (option != '4');

    return 0;
}