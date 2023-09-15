#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"How Many Elements do you want in your array: ";
    cin>>n;

    char arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter The Value "<<i<<": ";
        cin>>arr[i];
    }cout<<endl;

    cout<<"your array is: ";
     for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i = 1; i<n; i++){
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