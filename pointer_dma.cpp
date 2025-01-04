#include<iostream>
using namespace std;

int main(){

    int var = 10;
    int *ptr = new int;

    ptr = &var;

cout<<"var ="<<var<<endl;
cout<<"&var ="<<&var<<endl;
cout<<"ptr= "<<ptr<<endl;
cout<<"*ptr= "<<*ptr<<endl;

delete ptr;

//will crash after this. no output after this

cout<<"ptr after delete = "<<ptr<<endl;
cout<<"*ptr after delete = "<<*ptr<<endl;

return 0;


}