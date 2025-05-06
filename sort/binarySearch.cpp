#include<iostream>
using namespace std;


int main()
{
    const int SIZE = 10;
    int sortedArray[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    cout << "What element are you looking for? ";
    cin >> target;
    int low = 0;
    int high = SIZE -1;
    bool found = false;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        cout << "Checking the middle index: " << mid << " (Value: " << sortedArray[mid] <<") "<<endl ; 

        if(sortedArray[mid] == target)
        {
            cout << "####################################################################################" << endl;
            cout << "Element found at index: " << mid << "." << endl;
            found = true;
            break;
        }
        else if(sortedArray[mid] < target)
        {
            cout << "Seraching in the rigth half." << endl;
            low = mid + 1;
        }
        else if(sortedArray[mid] > target)
        {
            cout << "Seraching in the left half." << endl;
            high = mid - 1;
        }
    }
        if(!found)
        {
            cout << target << " Not found in the array." << endl;
        }

    
    return 0;
}