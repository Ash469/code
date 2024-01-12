/* Maxmium till ith element.
#include<iostream> 
using namespace std;
int main(){
    int mx=-19999999;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
     cin>>arr[i];
    }
  for (int i=0;i<n;i++){
     mx=max(mx,arr[i]);
     cout<<mx<<endl;
   }
    return 0;
    }*/
    
    //Notes:-
    //No of subarray=n*(n+1)/2;
    //No of subsequences=(2^n);
    //Every Subarry is Subsequence but 
    //every sub sequences is not subarry.
    
    //Sum of All SubArrays
   /* #include<iostream> 
    using namespace std;
    int main(){
      int n;
      cout<<"enter size of array"<<endl;
      cin>>n;
      int a[n];
      for (int i=0;i<n;i++){
        cin>>a[i];
      }
      cout<<"sum of subarray"<<endl;
      int curr=0;
      for (int i=0;i<n;i++){
        curr=0;
        for (int j=i;j<n;j++){
        curr+=a[j];
        cout<<curr<<endl;
        } 
      }
      return 0;
    }*/
    
    //Longest Arithematic Subarray
    /*#include<iostream> 
    using namespace std;
    int main(){
       int n;
       cout<<"enter size of array"<<endl;
       cin>>n;
       int a[n];
       for (int i=0;i<n;i++){
        cin>>a[i];
       }
       int prediff=a[1]-a[0];
       int curr=2;
       int ans=2;
       int j=2;
      while(j<n){
        if(prediff==a[j]-a[j-1]){
          curr++;
        }
        else{
          prediff=a[j]-a[j-1];
          curr=2;
        }
        ans=max(ans,curr);
        j++;
      }
      cout<<ans<<endl;
        return 0;
        }*/

// Record Breaker
/*#include<iostream> 
using namespace std;
int main(){
  int n;
  cout<<"enter your data"<<endl;
  cin>>n;
  int a[n+1];
  a[n]=-1;
  for (int i=0;i<n;i++){
    cin>>a[n];
  }
  int mx=-1;
  int ans=0;
  for (int i=0;i<n+1;i++){
    if(a[i]>mx&&a[i]>a[i+1]){
    ans++;
    }
    mx=max(mx,a[i]);
  }
  cout<<ans<<endl;
    return 0;
}*/