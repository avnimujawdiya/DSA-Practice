#include<iostream>
using namespace std;
int main(){
     int n = 1331;
     int original = n;
     int rev = 0;
      while(n>0)
      {
        int digit = n%10;
        rev= rev*10+ digit;
        n = n/10;

      }
      
       
        if(original==rev)
        {
            cout<<"palindrom";
        } else
        { cout<<"not palindrom";}
        return 0;

       
}