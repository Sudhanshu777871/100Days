// QUESTION URL - https://leetcode.com/problems/unique-number-of-occurrences/

// YOU HAVE TO DO THAT

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

bool uniqueOccurrences(const std::vector<int> &arr)
{
    std::unordered_map<int, int> occurrences;

    // Count occurrences of each element
    for (int num : arr)
    {
        occurrences[num]++;
    }

    // Check for unique occurrences
    std::unordered_set<int> uniqueCounts;
    for (const auto &pair : occurrences)
    {
        if (!uniqueCounts.insert(pair.second).second)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::vector<int> arr1 = {1, 2, 2, 1, 1, 3};

    std::cout << (uniqueOccurrences(arr1) ? "true" : "false");

    return 0;
}
