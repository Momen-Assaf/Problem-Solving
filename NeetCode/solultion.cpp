#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
}

bool hasDuplicate(vector<int> &nums)
{
    unordered_set<int> seen;
    for (int num : nums)
    {
        if (seen.find(num) != seen.end())
            return true;
        seen.insert(num);
    }
    return false;
}

bool isAnagram(string s, string t)
{
    unordered_map<char, int> s_count, t_count;

    if (s.length() != t.length())
        return false;

    for (int i = 0; i < s.length(); i++)
    {
        s_count[s[i]]++;
        t_count[t[i]]++;
    }
    for (int i = 0; i < s_count.size(); i++)
    {
        if (s_count[i] != t_count[i])
            return false;
    }
    return true;
}

class TwoSum
{
public:
    vector<int> twoSum(vector<int> &nums, int target) // O(n^2)
    {                                                 // longer time
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size() - 1; j++)
            {
                if (i == j + 1)
                    continue;
                if (nums[i] + nums[j + 1] == target)
                    return {i, j + 1};
            }
        }
        return {};
    }

    vector<int> twoSum(vector<int> &nums, int target) // O(n)
    {                                                 // more space
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end())
                return {mp[complement], i};
            mp.insert({nums[i], i});
        }
        return {};
    }
};
