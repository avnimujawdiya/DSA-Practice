// #include<iostream>
// using namespace std;
//  int main(){
//   int x,y ;
//   cin >>x >> y;
//   cout << "value of x :" << x <<"and y" << y;
//  return 0;  
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int age;
//     cin>>age ;
//     if(age >=18)
//     {
//         cout<< "you are an adult";

//     } else{
//         cout << "you are not an adult";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int marks ;
    cin>>marks;
    if(marks<=25)
    {
        cout<<"fail";
    } else if (marks>=25 && marks<=44)
    {
        cout<<"grade E";
    }else if(marks>=45 && marks<=59)
    {
        cout<<"Grade c";
    }else if(marks<=79)
    {
        cout<<"grade B";
    } else {
        cout<<"grade A";
    }
    return 0;
}