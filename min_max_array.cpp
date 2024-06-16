//WRITE A PROGRAM TO FIND AND DISPLAY MINIMUM AND MAXIMUM VALUES IN AN ARRAY

#include <iostream>
#include <climits>
using namespace std;


//function to find minimum value
int minimum(int a[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,a[i]);
    }
    return mini;
}

//function to find maximum value
int maximum(int a[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,a[i]);
    }
    return maxi;
}


int main(){
    int a[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Min: "<<minimum(a,size)<<" Max: "<<maximum(a,size)<<endl;
    return 0;
}