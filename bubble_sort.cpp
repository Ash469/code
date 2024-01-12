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
        // Bubble Sort     
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (arr[i] > arr[j]){  // for descending order change sign <
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Sorted Array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        return 0;
    }