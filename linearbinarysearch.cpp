#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,4,6,7,88,56,3,21,43};
    int target=7;
    bool ans=false;
    for(int i=0;i<10;i++){
        if(arr[i]==target) {
            cout<<"element found"<<endl;
            ans=true;
            break;
        }
    }
    if(!ans){
    cout<<"element not found";
    }
    int max=-1;
    for(int i=0;i<10;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"maximum element from array is "<<max<<endl;
}
