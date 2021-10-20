#include<iostream>
using namespace std;

int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.text", "r", stdin);
   freopen("output.text", "w", stdout);
   #endif

  int savings;
  cin>>savings;

  if(savings>5000){
      if(savings>10000){
         cout<<"Shopping neha\n";
      }else{
          cout<<"roadtrip neha\n";
      }
      
  }else if(savings>2000){
      cout<<"reshmi\n";
  }else{
      cout<<"frineds";
  }
   

return 0;
}
