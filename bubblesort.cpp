#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of elements you want in your array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter the Value: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"The array before sorting: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int counter = 1;
    while(counter<n){
        for(int i = 0; i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

     cout<<"The array after sorting: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}