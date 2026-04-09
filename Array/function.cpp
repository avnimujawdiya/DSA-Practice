// functions are set of code which perfrom something for you
// function are used to increace readability
// function are used to use same code multiple times

//void = which does not returns anything
// return
// parameter
// non parameter



// print two number and print its sum

#include<iostream>
using namespace std;
void sum(int num1 , int num2){
    int num3 = num1 +num2;
    cout<< num3;
}
 int main(){
    int num1, num2;
    cin>>num1>>num2;
    sum(num1,num2);
    return 0;

}
