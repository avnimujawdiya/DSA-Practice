//  Functional Recursion

#include<iostream>
using namespace std;
 int fact(int n){
    if(n==0 || n==1)
    return 1;
    return n*fact(n-1);

 }
 int main()
 {
    int n=5;
    cout<< fact(n);
    return 0;
 }

//  Parameterized Recursion

#include<iostream>
using namespace std;
 void fact(int n,int ans)
{
    if(n==0){
        cout<<ans;
        return;

    }
    fact(n-1,ans*n);
}
int main(){
    int n =5;
    fact(n,1);
    return 0;
}

























