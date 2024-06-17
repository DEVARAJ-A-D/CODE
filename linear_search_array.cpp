//Write a program to perform linear searching on array

#include <iostream>
using namespace std;

bool search(int arr[],int size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[100],size,val;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to be searched: ";
    cin>>val;
    bool b=search(arr,size,val);
    if(b){
        cout<<val<<" is found in array";
    }else{
        cout<<val<<" is not found in array";
    }





    return 0;
}