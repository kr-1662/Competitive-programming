#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int romanToInt(string s) {

        unordered_map<char, int> map_of_romanNumerals;
        unordered_map<char, int>::iterator it;
        vector<char> romanNumerals{s.begin(), s.end()};
        int sum = 0;

        map_of_romanNumerals['I'] = 1; 
        map_of_romanNumerals['V'] = 5;
        map_of_romanNumerals['X'] = 10;
        map_of_romanNumerals['L'] = 50;
        map_of_romanNumerals['C'] = 100;
        map_of_romanNumerals['D'] = 500;
        map_of_romanNumerals['M'] = 1000;
        
        for (int i = romanNumerals.size() - 1; i < romanNumerals.size(); i--) {
            sum = sum + map_of_romanNumerals.find(romanNumerals.at(i))->second;
        }

        if (s.find("IV") != string::npos || s.find("IX") != string::npos) {
            sum -= 2;
        }

        if (s.find("XL") != string::npos || s.find("XC") != string::npos) {
            sum -= 20;
        }

        if (s.find("CD") != string::npos || s.find("CM") != string::npos) {
            sum -= 200;
        }

        return sum;
    }

int main() {
    string str = "MCMXCIV";
    cout << romanToInt(str);

    return 0;
}