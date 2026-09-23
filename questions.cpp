#include<iostream>
using namespace std;
class student{
    int marks[3][3];
    public:
    void input() {
        cout << "Enter marks for 5 students in 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Student " << i + 1 << ": ";
            for (int j = 0; j < 3; j++) {
                cout << "Subject " << j + 1 << ": ";
                cin >> marks[i][j];
            }
        }
    }
    void calculate_total(){
        int highest_marks=0;
        int index=0;
        for(int i=0;i<3;i++){
            int total=0;
            for(int j=0;j<3;j++){
                total=total+marks[i][j];
            }
            cout<<"Total marks of student"<<i+1<<" are "<<total<<endl;
            if(total>highest_marks){
                highest_marks=total;
                index=i;
            }
        }
        cout<<"highest marks are "<<highest_marks<<" of student "<<index+1;
    }
};
int main(){
student s1;
s1.input();
s1.calculate_total();
}