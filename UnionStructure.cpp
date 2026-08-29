#include<iostream>
using namespace std;

struct student{
    string name;
    int age;
};

union stud{
    int age;
    char ch[10];
};

class student01{
 public:
 int age;
 string name;
 void setdata(int a,string n){
    age=a;
    name=n;
 }
 void printdata(){
    cout<<"Student details from Class"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
 }
};
void print0(){
cout<<"Hello from print0"<<endl;
}
void print1(){
cout<<"Hello from print1"<<endl;
print0();
}
void print2(){
cout<<"Hello from print2"<<endl;
print1();
}
void print3(){
cout<<"Hello from print3"<<endl;
print2();
}
int main(){
    // student s1;
    // s1.age=18;
    // s1.name="Abrar";
    // cout<<"Student details from Structure"<<endl;
    // cout<<"Age: "<<s1.age<<endl;
    // cout<<"Name: "<<s1.name<<endl;

    student01 s0;
    s0.setdata(1,"abrar");
    s0.printdata();

    // stud s2;
    // cout<<"details from union"<<endl;
    // s2.age=20;
    // cout<<"Age: "<< s2.age<<endl;
    
    //print3();
    
}