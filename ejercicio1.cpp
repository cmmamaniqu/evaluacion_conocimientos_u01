#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Ingrese el primer numero: ";cin>>a;
    cout<<"Ingrese el segundo numero: ";cin>>b;
    cin>>op;
    switch(op){
        case '+':
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
        if(b!=0){
        res=a/b;
        cout<<"La division es: "<<res;
        }
        break;
        default:
        cout<<"op no valido: ";
        break;
        }
        }
        return 0;
}