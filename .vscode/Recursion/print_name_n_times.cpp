#include<iostream>
using namespace std;
void printname(int n)
 {
    if (n==0)
    return ;

    cout<<"Avni"<<endl;
   printname(n-1);

 }
 int main(){
    int n=6;
    printname(n);
    return 0;
 }