#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor
    Box(double l = 0, double b = 0, double h = 0) {
        length = l;
        breadth = b;
        height = h;
    }

    // Getters
    double getLength() {
        return length;
    }

    double getBreadth() {
        return breadth;
    }

    double getHeight() {
        return height;
    }

    // Setters
    void setLength(double len) {
        length = len;
    }

    void setBreadth(double bre) {
        breadth = bre;
    }

    void setHeight(double hei) {
        height = hei;
    }

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b) {
        Box box(length + b.length, breadth + b.breadth, height + b.height);
        return box;
    }

    // Get volume
    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    Box Box1; // Declare Box1 of type
    Box Box2; // Declare Box2 of type
    Box Box3; // Declare Box3 of type
    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // Add two objects
    Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}