#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cin>>a;
    cin>>b;
    cin>>op;
    switch(op){
        case '+':
        //  r =a+b;
          cout<<"r"<<a+b;
        break;
        case'-':
         cout<<"r"<<a-b;
        break;
        case'*':
          cout<<"r"<<a*b;
        break;
        case'/':
          cout<<"r"<<a/b;
        break;
        }
        return 0;
}
