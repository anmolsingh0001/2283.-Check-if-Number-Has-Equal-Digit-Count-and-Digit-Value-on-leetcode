class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> maps;
        int size = num.length();

        for(int i = 0; i < size; i++) {
            maps[num[i] - '0']++;
        }

        for(int i = 0; i < size; i++) {
            int digit = i;
            int times = num[i] - '0';

            if(maps[digit] != times) return false;
        }
        return true;
    }
};