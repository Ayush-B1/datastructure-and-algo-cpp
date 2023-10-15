#include<iostream>

using namespace std;

int main() {
    int arr[] = {1, 3, 5, 1, 3, 6, 4, 32,2,52,32 ,0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int hash[10] = {0};
    for (int i = 0; i < size; i++) {  
        hash[arr[i]%10]++;
    }

    int q;
    cout << "enter how many times you want to search" << endl;
    cin >> q;
    while (q--) {
        int target;
        cout << "enter the element you want to search " << endl;
        cin >> target;

        cout << "The frequency of " << target << " is " << hash[target] << endl;
    }
}
