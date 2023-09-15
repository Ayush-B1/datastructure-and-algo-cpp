#include<iostream>

using namespace std;

void walk(int steps);

int main(){

    walk(10);
    return 0;
}

void walk(int steps){
    if(steps > 0){
        cout<<"10"<<endl;
        walk(steps-1);
    }

}