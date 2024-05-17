#include <iostream>
using namespace std;

class Person {
public:
    float weight;
    string firstName;
    int age; // declare age here

    Person(string name, float newWeight) {
        firstName = name;
        weight = newWeight;
    }
    // Implement comparison operators
    bool operator==(const Person& otherPerson) {
        return firstName == otherPerson.firstName && weight == otherPerson.weight;
    }
    bool operator!=(const Person& otherPerson) {
        return !(*this == otherPerson);
    }
    bool operator<(const Person& otherPerson) {
        return weight < otherPerson.weight;
    }
    bool operator>(const Person& otherPerson) {
        return weight > otherPerson.weight;
    }

private:
};

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    if (Jane == John) {
        cout << "This is the same person" << endl;
    } else {
        cout << "This is NOT the same person" << endl;
    }

    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }

    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    } else {
        cout << "John is older than Jane" << endl;
    }

    // You cannot add two persons, you can only add their weights.
    float totalweight = Jane.weight + John.weight;
    cout << "Total weight: " << totalweight << endl;

    // You cannot convert a Person object to an integer or a string.
    // You can convert it to a string using the toString() function if you implement it.
    
    // To get the first name of a person, you can directly access the firstName variable.
    cout<<"Jane's Firstname "<<Jane.firstName<<endl;

    // To get the weight of a person, you can directly access the weight variable.
    cout <<"Jane' weight "<<Jane.weight<<endl;

    return 0;
}