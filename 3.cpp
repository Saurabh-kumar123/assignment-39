#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1;
     l1.assign({1,2,3,4,5,6,7,8,9,10});// method 1 assign
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
        int sum=0;;
        while(!l1.empty())
        {
             sum=sum+l1.front();
             l1.pop_front();
        }
        cout<<"\nsum is : "<<sum<<endl;
     return 0;
}


