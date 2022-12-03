#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
     forward_list<int> l1,l2;
     l1.assign({1,2,3,4});// method 1 assign
     l2.assign({5,6,7,8,9});
     for(auto it = l1.begin();it!=l1.end();++it)
      cout<<*it<<" ";
        cout<<endl;
        for(auto it = l2.begin();it!=l2.end();++it)
      cout<<*it<<" ";
        cout<<endl;
        /*forward_list<int>::iterator it;        //insert any position == splice_after
        it=l1.begin();
        it++;
        it++;*/
    l1.splice_after(l1.begin(),l2,l2.before_begin(),l2.end());
    cout<<"\nelements are : "<<endl;
    for(auto it = l1.begin();it!=l1.end();++it)
      cout<<*it<<" ";
        cout<<endl;
     return 0;
}





