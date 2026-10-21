#include<iostream>
using namespace std;

class person{
    public:
    int age;
    string name;
};

class student:public person{
    public:
    int rollNo;
    void setdata(string n,int a, int r){
        name=n;
        age=a;
        rollNo=r;
    }
    void print(){
        cout<<"Name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"roll No:"<<rollNo<<endl;
    }
};

class animal{
    public:
    void eat(){
        cout<<"Animal eats food"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"Dog barks"<<endl;
    }
};

class employee{
    public:
    string name;
    int salary;
};
class manager:public employee{
    public:
    string department;
    void setdata(string n,int s,string d){
        name=n;
        salary=s;
        department=d;
    }
    void print(){
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Department:"<<department<<endl;
    }
};
int main(){
    student s1;
    s1.setdata("Abrar",21,2);
    s1.print();
    dog d1;
    d1.eat();
    d1.bark();
    manager m;
    m.setdata("abrar",23000,"CSE");
    m.print();
}