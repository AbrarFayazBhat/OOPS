#include <iostream>
using namespace std;
class dip235
{
    static int count;

public:
    static void countobjects()
    {
        count++;
    }
    static void totalcount()
    {
        cout << "total objects:" << count;
    }
};
int dip235::count = 0;

int main()
{
    //    dip235 d1,d2,d3,d4,d5,d6;
    //    d1.countobjects();
    //    d2.countobjects();
    //    d3.countobjects();
    //    d4.countobjects();
    //    d5.countobjects();
    //    d6.countobjects();
    //    dip235::totalcount();
    // int arr[10] = {0};
    // cout << "Enter the elements of array" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // int key;
    // int index = 0;
    // cout << "Enter element to search" << endl;
    // cin >> key;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] == key)
    //     {
    //         index = i;
    //         cout << "index of key:" << index;
    //         break;
    //     }
    // }

    // cout << "element not present";

    // // cout<<"index of key:"<<index;
//     int arr[5]={1,3,5,7,9};
//     int nums[10]={2,4,6,87,90,98,99};
//     int ans[15]={0};
//     int i=0;
//     int j=0;
//     int index=0;
//    while(i<5 && j<10){
//     if(arr[i]<nums[j]){
//         ans[index]=arr[i];
//         i++;
//         index++;
//     }
//     else{
//         ans[index]=nums[j];
//         index++;
//         j++;
//     }
//    }
//    while(i<5){
//     ans[index]=arr[i];
//     index++;
//     i++;
//    }
//    while(j<10){
//     ans[index]=nums[j];
//     index++;
//     j++;
//    }
//     for(int i=0;i<15;i++){
//         cout<<ans[i]<<endl;
//     }
int arr[6]={1,1,0,1,1,1};
int count=0;
int maxlen=0;
for(int i=0;i<6;i++){
    if(arr[i]==1){
        count++;
        maxlen=count;
    }
    else{
        maxlen=0;
        count=0;
    }
}
cout<<maxlen;
    return 0;
}