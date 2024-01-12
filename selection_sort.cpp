#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;
    cout << "Enter Your Array:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
        cout << "Unsorted Array:" << endl;
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        //Selection Sort:-selecting min element and put it first
        for (int i=0;i<n-1;i++){
            int indexmin=i;
            for( int j=i+1;j<n;j++){
                if(arr[j]<arr[indexmin]){
                    indexmin=j;
                }
            }
         int temp=arr[indexmin];
         arr[indexmin]=arr[i];
         arr[i]=temp;
        }
        cout << "Sorted Array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        return 0;
    }
    /* time  complexity:-  0(n2)
    It is Unstable Algo.(not in same order for equal elements)
    It is not adative algo.(not take less time for sorted array)*/