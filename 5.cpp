#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1;
     l1.assign({1,2,3,3,5,5,5,1,1,7,7});// method 1 assign
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
        // unique element..
        l1.unique();
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
     return 0;
}




