//Write a program to reverse an array

#include <iostream>
using namespace std;

void prinarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";

    }
    
}

void reverse(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    

}

int main(){
    int arr[100],size,val;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,size);
    cout<<"reversed array: ";
    prinarray(arr,size);





    return 0;
}