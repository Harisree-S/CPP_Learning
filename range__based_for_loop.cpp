#include<iostream>
#include<vector>
using namespace std;

// range based for loop will not work for arr


int main(){

int size;
cout<<"Enter size"<<endl;
cin>>size;

vector<int> vec;

for(int i=0;i<size;i++){
vec.push_back(i);
}

for(auto i : vec)
cout<<i<<" ";

return 0;

}