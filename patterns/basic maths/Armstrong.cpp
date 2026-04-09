#include<iostream>
using namespace std;
 int main()
 {
    int n = 159;
    int original = n;
    int count = 0;
     
    
   int sum = 0;
   while(n>0)
   {
    int digit = n%10;
    sum = sum+ digit*digit*digit;
    n = n/10;
   } if(original==sum)
   cout<<"Armstrong";
   else{
    cout<<"not armstrong";
   }
   return 0 ;


 }