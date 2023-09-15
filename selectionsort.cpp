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

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"Your Array after sorting: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}