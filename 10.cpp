
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1,l2;
     l1.assign({1,2,3,4,5,6,7,8,9,10});// method 1 assign
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
        // another list....
        cout<<"another list"<<endl;
        l2.assign(l1.begin(),l1.end());
    for(auto x=l2.begin() ; x != l2.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
     return 0;
}



