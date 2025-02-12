class Solution
{
public:
    int maximumSum(vector<int>& nums)
    {
    
        unordered_map<int, int> map;
        int maxSumPair = -1;
        for (int num : nums)
        { 
            int digitSum = getDigitSum(num); 
            if (map.find(digitSum) != map.end())
            { 
                maxSumPair = max(maxSumPair, num + map[digitSum]); 
                map[digitSum] = max(map[digitSum], num); 
            }
            else
            {
                map[digitSum] = num; 
            }
        }

        
        return maxSumPair; 
    }

private:

    int getDigitSum(int num)
    { 
        int sum = 0;
        while (num > 0)
        {
            sum += (num % 10);
            num /= 10;
        }

        return sum;
    }
};