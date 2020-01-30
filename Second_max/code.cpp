#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int  n, i;
    cout << "Enter the no. elements:";
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max= arr[i];
        }
    }
    int smax = arr[0];
    for(i = 0; i < n; i++)
    {
        if(smax < arr[i] && arr[i] < max)
        {
            smax = arr[i];
        }
    }
    cout << "Max:" << max << "\n" << "smax:" << smax; 
    return 0;
}
