#include <iostream>
#include<queue>
#include<vector>
using namespace std;

int impoertanceOfTime(queue<int> &q, vector<int> &arr){
  int count=0;
  for(int i=0;i<arr.size();i++){
    if(arr[i] == q.front()){
      count++;
      q.pop();
    }
    else{
      while(q.front()!=arr[i]){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
      }
      count++;
      q.pop();
    }

  }
  return count;
}

int main() {
  int n;
  cin>>n;
  queue<int> q;
  vector<int> arr;
  for(int i=0;i<n;i++){
    int var;
    cin>>var;
    q.push(var);
  }

  for(int i=0;i<n;i++){
    int var;
    cin>>var;
    arr.push_back(var);
  }
  cout<<impoertanceOfTime(q,arr);
    return 0;
}
