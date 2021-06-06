#include <iostream>
#include<stack>
using namespace std;

bool duplicate(string str){
  stack<char> s;
  
  for(auto ch:str){
  
    if(ch == ')'){
       char Top = s.top();
      s.pop();
    
    //check for immedidiate pop that if you encounter 
    if(Top == '('){
      return true;//duplicate found 
    }
    if(Top != '('){
      while(Top != '('){
        Top = s.top();
        s.pop();
      }
    }
    }
    else
      s.push(ch);
    
  }
return false;
}


int main() {
  int t;
  cin>>t;
  while(t--){
    string str;
    cin>>str;
    if(duplicate(str)){
      cout<<"duplicate"<<endl;
    }
    else{
      cout<<"not duplicate"<<endl;
    }
  }



    return 0;
}
