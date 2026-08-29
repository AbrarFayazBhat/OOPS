#include <iostream>
using namespace std;

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare friendClass as a friend class
    friend class FriendClass;
    
    // Declare friend function
    friend void displayData(MyClass& obj);
};

class FriendClass {
public:
    void displayPrivateData(MyClass& obj) {
        // FriendClass can access private members of MyClass
        cout << "Private Data: " << obj.privateData << endl;
    }

    void modifyPrivateData(MyClass& obj, int newValue) {
        obj.privateData = newValue;
        cout << "Modified Private Data to: " << obj.privateData << endl;
    }
};

void displayData(MyClass& obj) {
    // Friend function can access private members of MyClass
    cout << "Friend Function - Private Data: " << obj.privateData << endl;
}

int main() {
    MyClass myObj(42);
    FriendClass friendObj,friendobj2;

    // FriendClass can access and modify private members
    friendObj.displayPrivateData(myObj);
    friendObj.modifyPrivateData(myObj, 100);
    friendObj.displayPrivateData(myObj);
    friendObj.displayPrivateData(myObj);
    friendObj.modifyPrivateData(myObj, 400);
    friendObj.displayPrivateData(myObj);

    return 0;
}
