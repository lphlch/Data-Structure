﻿#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return vector<int>{i, j};
            }
        }
    }
    return vector<int>(2);
}

int main()
{
    //……
	return 0;
}

