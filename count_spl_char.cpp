class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lowerMask = 0, upperMask = 0;
        for(char ch : word) {
            if(islower(ch))
                lowerMask |= (1 << (ch - 'a'));
            else
                upperMask |= (1 << (ch - 'A'));
        }
    return __builtin_popcount(lowerMask & upperMask);
    }
};
