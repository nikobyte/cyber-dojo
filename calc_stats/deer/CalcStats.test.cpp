#include "CalcStats.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(CalcStats, Minimum)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ASSERT_EQ(1, minimum(arr, 10));

    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    ASSERT_EQ(1, minimum(arr2, 10));
}

TEST(CalcStats, Maximum)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ASSERT_EQ(10, maximum(arr, 10));

    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    ASSERT_EQ(10, maximum(arr2, 10));
}

TEST(CalcStats, NumElements)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ASSERT_EQ(10, numElements(arr, 10));

    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    ASSERT_EQ(10, numElements(arr2, 10));


}

TEST(CalcStats, AverageVal)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    ASSERT_EQ(5.5, averageVal(arr, 10));

    int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    ASSERT_EQ(5.5, averageVal(arr2, 10));
}