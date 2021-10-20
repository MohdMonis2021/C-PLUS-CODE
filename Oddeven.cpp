#include<iostream>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.text", "r", stdin);
   freopen("output.text", "w", stdout);
   #endif

   int n;
   cin>>n;

   if(n%2==0){
       cout<<"EVEN"<<endl;
   }else{
       cout<<"odd"<<endl;
   }

   return 0;

}