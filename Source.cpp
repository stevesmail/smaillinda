// main.cpp : Driver program to test the sort method
#include "SortableBag.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    SortableBag<int> bag; // create an object of SortableBag

    // Generates a list of 100 random integers in the range of [1,100] and insert the integers into the bag.
    for (int i = 0;i < 100;i++)
    {
        bag.add(rand() % 100 + 1);
    }

    bag.sort(); // sort the bag

    // convert the bag into vector of integers
    vector<int> sortedBag = bag.toVector();

    // Verifies that the bag is sorted
    for (size_t i = 0;i < sortedBag.size() - 1;i++)
    {
        // if ith integer > (i+1)the integer then the bag is not sorted
        if (sortedBag[i] > sortedBag[i + 1])
        {
            cout << "Fail" << endl;
            return 0;
        }
    }

    cout << "syetem Pass" << endl;
    return 0;
}


//end of main.cpp