#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> sMap;
        for (char l : s){
            if (sMap.find(l) == sMap.end()){
                sMap.emplace(l,1);
            } else {
                sMap.find(l)->second++;
            }
        }
        for (char a : t){
            if (sMap.find(a) == sMap.end() || sMap.find(a)->second <= 0){
                return false;
            } 
            sMap.find(a)->second--;
        }

        return true;
        // for(auto x : sMap){
        //     cout << "chave: " << x.first << ". valor: " << x.second << ".\n";
        // }
        // return true;
    }
};

int main(){
    Solution sol;
    sol.isAnagram("texto", "nada");
    return 0;
}