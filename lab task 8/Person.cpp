#include <iostream>
using namespace std;

class Person {
public:
    float weight;
    Person(string name, float newWeight) {
        mFirstName = name;
        mWeight = newWeight;
    }
    float operator + (const Person& otherPerson) {
        return mWeight + otherPerson.mWeight;
    }
    // Implement comparison operators
    bool operator==(const Person& otherPerson) {
        return mFirstName == otherPerson.mFirstName && mWeight == otherPerson.mWeight;
    }
    bool operator!=(const Person& otherPerson) {
        return !(*this == otherPerson);
    }
    bool operator<(const Person& otherPerson) {
        return mWeight < otherPerson.mWeight;
    }
    bool operator>(const Person& otherPerson) {
        return mWeight > otherPerson.mWeight;
    }
private:
    string mFirstName;
    float mWeight;
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

    float totalweight = Jane + John;
    cout << "Total weight: " << totalweight << endl;

    return 0;
}