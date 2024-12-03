// 2. Assignment Operators
// Challenge: Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (e.g., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operators.

// Operators: +=, -=, *=, /=, %=

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
