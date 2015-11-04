#include <iostream>
#include <vector>
#include <algorithm>
#include "calc.stats.hpp"

using namespace std;

void calc_stats(const vector<int>& numbers)
{
    cout << "numbers are ";
    for (unsigned int i=0; i< numbers.size(); ++i)
    {
        cout << numbers[i] << ":";
    }
    cout << endl;
    
    cout << "minimum is " << minimum(numbers) << endl;
}

int minimum(const vector<int>& numbers)
{
    return *min_element(numbers.begin(), numbers.end());
}

int maximum(const vector<int>& numbers)
{
    return *max_element(numbers.begin(), numbers.end());
}

int num_elements(const vector<int>& numbers)
{
    return numbers.size();
}

float average(const vector<int>& numbers)
{
    int sum = 0;
    for (int n: numbers)
    {
        sum += n;
    }

    return (float)sum/numbers.size();
}
