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
        //Insertion Sort:- inserting an element in sorted array
        for (int i=0;i<n;i++){
            int key=arr[i];
            int j=i-1;
            while (arr[j]>key&&j>=0){  //for descending order arr[j]<key
                arr[j+1]=arr[j];
                j--;
            }
           arr[j+1]=key;
        }
    cout << "Sorted Array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        return 0;
    }
    /*Notes:- time complexity:-  0(n2)worst case  and 0(n)best case
    It is stable algorithm(same order  for equal elements).
    It is Adaptive algo(alredy sorted array takes less time).*/