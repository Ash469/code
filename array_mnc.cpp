//First repeating element  with 0(nlogn)!!!
/*#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    int  arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    const  int N=100;
    int idx[N];
    for (int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;// some random big int
    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]);
        }else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }else{
        cout<<minidx<<endl;
    }
return 0;
}*/

//
#include<iostream> 
using namespace std;
int main(){
    int n,s;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter your number"<<endl;
    cin>>s;
    int  arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n&&sum+arr[j]<=s){
        sum+=arr[j];
        j++;
    }
if(sum==s){
    cout<<i+1<<" "<<j<<endl;
    return 0;
} 
while(j<n){
    sum+=arr[j];
    while(sum>s){
        sum-=arr[i];
        i++;
    }
    if (sum==s){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
}
cout<<st<<" "<<en<<endl;
}