// Function returns the answer
#include<iostream>
using namespace std;
 
int add(int n){
    if(n==0)
    return 0;
// Each function waits for next result, then adds
    return n + add(n-1); 
}
int main(){
    int n =5;
    cout<<add(n);
    return 0;

}