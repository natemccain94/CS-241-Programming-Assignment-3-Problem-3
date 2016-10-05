//
// proThreeProblemThree.cpp
// COMP241
// Fall 2015
// PA3 Problem 3
// 05 November, 2015
// Nate McCain
//

#include <iostream>

using namespace std;

int giveBinOnes(int decimal);

int main()
{
    cout << "The number of one's for 23 is: " << giveBinOnes(23) << endl;
    cout << "The number of one's for 32 is: " << giveBinOnes(32) << endl;
    cout << "The number of one's for 14 is: " << giveBinOnes(14) << endl;
    cout << "The number of one's for 15 is: " << giveBinOnes(15) << endl;
    cout << "The number of one's for 2 is: " << giveBinOnes(2) << endl;
    cout << "The number of one's for 6 is: " << giveBinOnes(6) << endl;
    
    
    
    return 0;
}

int giveBinOnes(int decimal)
{
    if (decimal == 0)
    {
        return 0;
    }
    else if (decimal == 1)
    {
        return 1;
    }
    else
    {
        return giveBinOnes(decimal/2)+giveBinOnes(decimal%2);
    }
}


