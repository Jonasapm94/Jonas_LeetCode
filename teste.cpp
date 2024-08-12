#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char, int> sMap;
    sMap.emplace('a', 1);
    for (auto x : sMap){
        cout << x.first << "; " << x.second << endl;
    }
    auto it = sMap.find('a');
    // cout << it != sMap.end() << endl;
    cout << it->second << endl;
    cout << (*it).second << endl;
    return 0;
}