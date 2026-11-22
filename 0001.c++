// Data : Nov / 22 / 2026
// problem link : https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/description

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkString(string s) {
        int As = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a') As++;
        }

        int counter = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'b'){
                if(counter < As) return false;
            }
            else counter++; 
        }
        return true;
    }
};


// Optemal

class Solution {
public:
    bool checkString(string s) {
        bool seen = false;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == 'b') seen = true;
            else if(seen) return false;
        }

        return true;
    }
};