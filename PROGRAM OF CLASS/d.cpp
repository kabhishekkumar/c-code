#include <iostream>
using namespace std;

class Example {
private:
    int data;

public:
    // Default constructor
    Example() {
        cout << "Default constructor invoked." << endl;
        data = 0;
    }

    // Parameterized constructor
    Example(int value) {
        cout << "Parameterized constructor invoked." << endl;
        data = value;
    }

    // Copy constructor
    Example(const Example &old_object) {
        cout << "Copy constructor invoked." << endl;
        data = old_object.data;
    }

    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Default constructor
    cout << "Creating obj1 using default constructor:" << endl;
    Example obj1;

    // Parameterized constructor
    cout << "\nCreating obj2 using parameterized constructor:" << endl;
    Example obj2(10);

    // Copy constructor
    cout << "\nCreating obj3 using copy constructor:" << endl;
    Example obj3 = obj2;

    cout << "\nDisplaying obj1:" << endl;
    obj1.display();

    cout << "\nDisplaying obj2:" << endl;
    obj2.display();

    cout << "\nDisplaying obj3:" << endl;
    obj3.display();

   
}
