#include<iostream>
using namespace std;

int main()
{
    int n;  // This will store how many numbers the user wants to enter
    
    // Step 1: Ask the user how many numbers they have
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    
    // Step 2: Create an empty array with that many slots
    int arr[n];
    
    // Step 3: Ask the user to fill each slot, one by one
    cout << "Please enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];  // Read the number and put it in slot i
    }
    
    // Step 4: Find largest and smallest (same logic as before!)
    int largest = arr[0];
    int smallest = arr[0];
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    
    // Step 5: Show the results
    cout << "\n--- RESULTS ---" << endl;
    cout << "The largest value is: " << largest << endl;
    cout << "The smallest value is: " << smallest << endl;
    
    return 0;
}
