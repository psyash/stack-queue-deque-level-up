#include <iostream>
#include<stack>
using namespace std;

void queueUsing2Stack(int n){
  stack<int> s1;
  stack<int> s2;
  for(int i=0;i<n;i++){
    s1.push(i);
  }
  for(int i=0;i<n;i++){
    int x = s1.top();
    s1.pop();
    s2.push(x);
  }
  for(int i=0;i<n;i++){
    int x = s2.top();
    cout<<x<<" ";
    s2.pop();
  } 
}

int main() {
    int n;
    cin>>n;
    queueUsing2Stack(n);
    return 0;
}
