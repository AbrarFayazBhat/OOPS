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

int main(){
    student s1;
    s1.setdata("Abrar",21,2);
    s1.print();
}