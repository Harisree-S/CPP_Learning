#include<iostream>
using namespace std;

int main(){

int var;
var=5;

int *ptr;
ptr=&var;

cout<<"var ="<<var<<endl;
cout<<"&var ="<<&var<<endl;
cout<<"ptr= "<<ptr<<endl;
cout<<"*ptr= "<<*ptr<<endl;

return 0;

}