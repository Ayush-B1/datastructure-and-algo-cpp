#include<iostream>

using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
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

    int key;
    cout<<"Enter The Number You want to check in your array: ";
    cin>>key;

    bool found = search(arr, n, key);
    if( found ){
        cout<<"The Element is present in your array"<<endl;
    }else{
        cout<<"The Element you are searching for is not present in this array"<<endl;
    }

}