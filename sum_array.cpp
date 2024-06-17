//Write a program in cpp to find the sum of an array

#include <iostream>
using namespace std;

int sum(int arr[],int size){
    int s=0;
    for(int i=0;i<size;i++){
        s+=arr[i];
    }
    return s;
}

int main(){

    int a[100],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<sum(a,size);


    return 0;
}