#include<iostream>

using namespace std;

int main(){
    int teaBags;
    
    cout<<"Enter the number of tea bags that you have: ";
    cin>> teaBags;

    // assign tea bags based on some certain  condition
    if(teaBags<10){
        teaBags += 5;
    }
    cout<<"Your total bags are: "<<teaBags<<endl;
    
    return 0;
}