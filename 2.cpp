#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1;
     l1.assign({1,2,3,4,5});// method 1 assign
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
     return 0;
}

