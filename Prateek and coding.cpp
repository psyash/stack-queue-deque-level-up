#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<int> s;
  int t;
  cin>>t;
  while(t--){
    int querytype;
    cin>>querytype;
    if(querytype == 2){
      int d;
      cin>>d;
      s.push(d);
    }
    else{
      cout<<s.top()<<endl;
      s.pop();
    }
  }
  return 0;
}