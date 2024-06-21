//Write a program to swap the alternate elements of an array.


#include <iostream>
using namespace std;

void prinarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";

    }
    
}

void swayarray(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
    prinarray(arr,size);

}


int main(){
    int arr[100],size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    swayarray(arr,size);




    return 0;
}