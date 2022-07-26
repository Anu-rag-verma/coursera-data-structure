#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string text;
    cin>>text;
    stack <int> st;
    for(int i=0;i < text.length();i++){
        if(text[i]=='{'  ||  text[i]=='('  ||  text[i]=='['){
            st.push(i);
        }

        else if(text[i]=='}'   ||   text[i]==')' || text[i]==']'){
            
            if(st.empty()) {
                st.push(i);
                cout<<st.top()+1;
                return 0;
            }    
            else if(text[st.top()]=='{'&& text[i]=='}'){
                st.pop();
                continue;
            }
            else if(text[st.top()]=='('&& text[i]==')'){
                st.pop();
                continue;
            }
            else if(text[st.top()]=='['&& text[i]==']'){
                st.pop();
                continue;
            }
            else {
                st.push(i);
                cout<<st.top()+1;
                return 0;
            }
        }
    }
    if(st.empty()){
        cout<<"Success";
    }
    else cout<<st.top()+1;
    
    return 0;
}
/*
if(st.empty()) {
                st.push(i);
                cout<<st.top()+1;
                return 0;
            }*/