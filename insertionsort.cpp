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

    for(int i = 1; i<n; i++ ){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout<<"your array after sorting: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}