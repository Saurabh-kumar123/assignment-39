
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1,l2;
     l1.assign({3,2,9});// method 1 assign
     l2.assign({8,2,1});
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
    for(auto x=l2.begin() ; x != l2.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
        cout<<"after swap"<<endl;
        l1.swap(l2);
        for(int a : l1)
        cout<<a<<" ";
        cout<<endl;
        for(int x : l2)
        cout<<x<<" ";
        cout<<endl;
     return 0;
}




