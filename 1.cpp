#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1;
     forward_list<int> l2;
     forward_list<int> l3;
     l1.assign({1,2,3,4,5});// method 1 assign
     l2.assign(5,10);//method 2 assign
     forward_list<int>::iterator x;
     for(x=l1.begin();x!=l1.end();x++)
          cout<<*x<<" ";
          cout<<endl;
     for(x=l2.begin();x!=l2.end();x++)
          cout<<*x<<" ";
     cout<<endl;
     l3.assign(l2.begin(),l2.end());
     for(x=l3.begin();x!=l3.end();x++)
          cout<<*x<<" ";
          cout<<endl;

   // x = l3.begin();
   // x++;
   // x++;
    //x++;
   // x++;
    l3.insert_after(l3.begin(),{7,8,9});
    for(x = l3.begin() ; x != l3.end() ; x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    l1.merge(l3);
    for(x = l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";

    cout<<"\nafter sort"<<endl;
    l1.sort();
    for(auto x=l1.begin() ; x != l1.end() ; x++)
        cout<<*x<<" ";
     return 0;
}

