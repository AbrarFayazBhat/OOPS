#include<iostream>
using namespace std;

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"inside swap function value of a="<<x<<endl;
    cout<<"inside swap function value of b="<<y<<endl;

}
void swapnum(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=10;
    int b=6;
    cout<<"before swap value of a="<<a<<endl;
    cout<<"before swap value of b="<<b<<endl;
    //swap(10,6);
    swapnum(a,b);
    cout<<"outside swap after function call value of a "<<a<<endl;
    cout<<"outside swap afet function call value of b "<<b<<endl;
    
    //PRINTING ARRAY WIHTOUT USING ARRAY NAME
    int arr[10]={1,23,42,5,4,55,12,10};
    int *p=arr;
    cout<<*p<<endl;
    cout<<*(p+1);

}