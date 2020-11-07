#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main() {
    stack <char> s;
    string s1;
    cin>>s1;
    int l=s1.length();
    for(int i=0;i<l;i++){
        if(s1[i]=='('){
            s.push(s1[i]);
        }
        if(s1[i]==')'){
            if(!s.empty() && s.top()=='('){
                s.pop();
            }
        }
         if(s1[i]=='['){
            s.push(s1[i]);
        }
        if(s1[i]==']'){
            if(!s.empty() && s.top()=='['){
                s.pop();
            }
        }
          if(s1[i]=='{'){
            s.push(s1[i]);
        }
        if(s1[i]=='}'){
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }
        }
    }
    if(s.empty() ){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

	return 0;
}
