#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockSpan(vector<int> &price){
  vector<int> ans(n,0);
  stack<int> s;//to store indices
  int n = price.size();

  s.push(0);

  ans[0] = 1;
  for(int i=1;i<n;i++){
  //pop element from stack till you find next greater element
  while(!s.empty() && price[s.top()]<=price[i]){
    s.pop();
  }
  if(s.empty()){
    ans[i] = i + 1;
  }
  else{
    ans[i] = i - s.top();
  }
  s.push(i);
}
return ans;

}

int main(){
  int n;
  cin>>n;
  vector<int> price(n,0);
  for(int i=0;i<n;i++){
    int d;
    v.push_back(d);
  }
  stockSpan(price);

  return 0;
}