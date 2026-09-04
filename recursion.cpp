#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int fibonacci(int N) {
    if (N <= 1) {
        return N;
    }
    int last = fibonacci(N - 1);   
    int secondlast = fibonacci(N - 2);  

    return last + secondlast;
}
void reverseorder(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    reverseorder(n-1);
}
int sumofdigit(int n){
    if(n<0){
        return 0;
    }
    int digit=n%10;
    int sum=sum+digit;
    return sumofdigit(n/10);
}
int main(){
    cout<<fact(5)<<endl;
    cout<<fibonacci(10)<<endl;
    //reverseorder(10)<<endl;
   int result=sumofdigit(111);
    cout<<result;
}