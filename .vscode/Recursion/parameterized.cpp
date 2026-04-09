#include<iostream>
using namespace std;

 void add(int n,int s)
{
    if(n==0){
        cout<<s;
        return;

    }
    add(n-1, s+n);

} int main()
{
    int n= 5;
    add(n,0);
    return 0;
}