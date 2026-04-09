#include<iostream>
using namespace std;
void print1( )
{
    for(int i=0;i<5 ; i++)
    {
        for(int j=0; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
};
int main()
{
    // int n;
    // cin>>n;
    print1();
    return 0;
}