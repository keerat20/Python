#include<iostream>
using namespace std;

int main(){

    int i,j,arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;

    for (i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    size-=1;

    cout<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}