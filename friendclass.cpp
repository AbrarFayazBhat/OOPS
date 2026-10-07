// #include <iostream>
// using namespace std;

// class MyClass {
// private:
//     int privateData;

// public:
//     MyClass(int data) : privateData(data) {}

//     // Declare friendClass as a friend class
//     friend class FriendClass;
    
//     // Declare friend function
//     friend void displayData(MyClass& obj);
// };

// class FriendClass {
// public:
//     void displayPrivateData(MyClass& obj) {
//         // FriendClass can access private members of MyClass
//         cout << "Private Data: " << obj.privateData << endl;
//     }

//     void modifyPrivateData(MyClass& obj, int newValue) {
//         obj.privateData = newValue;
//         cout << "Modified Private Data to: " << obj.privateData << endl;
//     }
// };

// void displayData(MyClass& obj) {
//     // Friend function can access private members of MyClass
//     cout << "Friend Function - Private Data: " << obj.privateData << endl;
// }

// int main() {
//     MyClass myObj(42);
//     FriendClass friendObj,friendobj2;

//     // FriendClass can access and modify private members
//     friendObj.displayPrivateData(myObj);
//     friendObj.modifyPrivateData(myObj, 100);
//     friendObj.displayPrivateData(myObj);
//     friendObj.displayPrivateData(myObj);
//     friendObj.modifyPrivateData(myObj, 400);
//     friendObj.displayPrivateData(myObj);
//     cout<<"hello";

//     return 0;
// }
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student() {
        name = "Abrar";
        age = 22;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Rectangle {
    int length;
    int width;

public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate and display area
    void displayArea() {
        int area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
int main() {
    Student s;
    s.display();
    Rectangle r(10, 5);
    r.displayArea();
    return 0;
}

