#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=i;j>=0;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
      for(int i=0;i<rows;i++){
        for(int j=i;j>=0;j--){
            cout<<i+1;        
        }
        cout<<endl;
    }
}
