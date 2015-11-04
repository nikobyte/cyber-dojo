#include "calc.stats.hpp"
#include <gtest/gtest.h>

#include <vector>

using namespace ::testing;
using namespace std;

TEST(CalcStats, check_minimum)
{
    vector<int> arr = {1, -1, 0};
    ASSERT_EQ(-1, minimum(arr));
}

TEST(CalcStats, check_maximum)
{
    vector<int> arr = {1, -1, 0};
    ASSERT_EQ(1, maximum(arr));
}

TEST(CalcStats, check_num_elements)
{
    vector<int> arr = {1, -1, 0};
    ASSERT_EQ(3, num_elements(arr));
}

TEST(CalcStats, check_average)
{
    vector<int> arr = {1, -1, 0, 10};
    ASSERT_EQ(2.5, average(arr));
}