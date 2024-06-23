#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){

double n1, n2;
char op;

cout<<"Digite seu primeiro numero: ";
cin>>n1;

cout<<"Digite a operação: ";
cin>>op;

cout<<"Digite o segundo numero: ";
cin>>n2;

switch(op){
  case'+':
    cout<<(n1+n2)
  break;
  case '-':
    cout<<(n1-n2)
  break;
  case'*':
    cout<<(n1*n2)
  break;
  case'/':
      cout<<(n1/n2)
  break;
    default:
      return 0;
  }
}
