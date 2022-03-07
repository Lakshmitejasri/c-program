#include <stdio.h>
//using namespace std;
#define ll long long int
 
// Utility function to print
// the contents of an array
void printArr(ll arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Function to update the array
void updateArr(ll arr[], int n)
{
    for (int i = 0; i < n; i++) {
 
        // In case of even positioned element
        if ((i + 1) % 2 == 0)
            arr[i] = (ll)pow(arr[i], 2);
 
        // Odd positioned element
        else
            arr[i] = (ll)pow(arr[i], 3);
    }
    // Print the updated array
    printArr(arr, n);
}
 
// Driver code
int main()
{
    ll arr[] = { 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    updateArr(arr, n);
 
    return 0;
}
