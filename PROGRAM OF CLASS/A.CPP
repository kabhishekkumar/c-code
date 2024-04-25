#include <iostream>

class MyClass {
private:
    int privateData;

public:
    // Member function declared inside the class
    void setData(int data) {
        privateData = data;
    }

    // Member function declared outside  class
    void getData();
};

// Member function definition outside the class
void MyClass::getData() {
    std::cout << "Private data: " << privateData << std::endl;
}

int main() {
    MyClass obj;
    obj.setData(10);
    obj.getData();
   
}
