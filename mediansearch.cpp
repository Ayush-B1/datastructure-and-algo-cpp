#include<iostream>

using namespace std;

int findmedian(int arr[], int size){
    
}


int main(){
    int n;
    cout<<"Enter the numbers you want in your array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the Value "<<i<<": ";
        cin>>arr[i];
    }cout<<endl;
    
    cout<<"Your array is: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}