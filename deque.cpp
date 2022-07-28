#include<bits/stdc++.h>
using namespace std;
int main()
{

deque<int> dq;
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);
dq.push_back(4);
int i;
for(auto i: dq)
 cout<<i<<" ";
 cout<<"\n";

 dq.pop_back();
for(auto i: dq)
 cout<<i<<" ";
 cout<<"\n";

 dq.pop_front();
for(auto i: dq)
 cout<<i<<" ";
 cout<<"\n";
cout<<dq.size();
 return 0;

}
