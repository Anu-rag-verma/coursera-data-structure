#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=-1;
    stack<int> mainstack;
    stack<int> trackstack;
    string query;
    int data;
    for(int i=0;i<n;i++){
        cin>>query;
        if(query=="push"){
            cin>>data;
            if(trackstack.empty()){
                mainstack.push(data);
                trackstack.push(data);
            }
            else{
                mainstack.push(data);
                if(trackstack.top()<data){
                    trackstack.push(data);
                }
                else {
                    trackstack.push(trackstack.top());
                }
            }
        }
        else if(query=="pop"){
            if(!mainstack.empty()){
            mainstack.pop();
            trackstack.pop();
            }
        }
        else if(query=="max"){
            cout<<trackstack.top()<<endl;
        }

    }
    return 0;
}