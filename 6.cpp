#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1,l2;
     //forward_list<int> l2;
     l1.assign({1,2,3,4,5,6,7,8,9,10});// method 1 assign
     l2.assign({1,2,3,3,5,5,5,1,1,7,7});
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
        for(auto x=l2.begin() ; x != l2.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
    cout<<"after merge"<<endl;
        l1.merge(l2);
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        cout<<endl;
     return 0;
}




