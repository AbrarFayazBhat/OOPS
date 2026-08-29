#include<iostream>
using namespace std;

class student
{
public:
int rollno;
int reges;
string name;
static int courseid;
  
void setdata(int r,int reg, string n){
    rollno=r;
    reges=reg;
    name=n;
}
void printdata(){
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"Registration Number:"<<reges<<endl;
    cout<<"Name:"<<name<<endl;
}

};
int student::courseid = 1234;

int main(){
    student s1,s2;
    s1.setdata(1,12423,"Abrar");
    s1.printdata();
    cout<<student::courseid;
}