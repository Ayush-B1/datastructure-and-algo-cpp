#include<iostream>

using namespace std;


int searching(int arr[], int size, int key){

    int mid_element;
    int starting_point = 0;
    int ending_point = size;
    while(starting_point <= ending_point){
        mid_element = (starting_point+ending_point)/2;

        if(arr[mid_element] == key){
            return mid_element;
        }else if(arr[mid_element] > key){
            ending_point = mid_element - 1;
        }else{
            starting_point = mid_element + 1;
        }
    }
    return -1;  

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
    
    int binarysearch = searching(arr, n, key);
    cout<<"The indexing of the element is: ";
    cout<<binarysearch<<endl;
}