// Conversion of Roman numerals to integers
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> romanMap;
        romanMap['I'] = 1;
        romanMap['V'] = 5;
        romanMap['X'] = 10;
        romanMap['L'] = 50;
        romanMap['C'] = 100;
        romanMap['D'] = 500;
        romanMap['M'] = 1000;

        int result=0;

        for(int i=0; i<s.size(); i++) {
            if(i+1 < s.size() && romanMap[s[i]] < romanMap[s[i+1]]) {
                result -= romanMap[s[i]];
            } else {
                result += romanMap[s[i]];
            }
        }
        return result;
    }
};