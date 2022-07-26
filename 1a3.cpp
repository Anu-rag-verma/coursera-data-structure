#include<iostream>

using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int arr[s]=0;
    int buffp=0;
    int time=0;
    int bufft=0;
    int ta,tp;
    for(int i=0;i<n;i++){
        cin>>ta>>tp;
        if(time<ta)
        if(tp <= (s-bufft)){
            time=ta;
            bufft=tp;
            buffp=buffp+tp;
        }
    }
}