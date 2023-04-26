#include <unordered_map> // hash_map

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineLetters;   // make hash_map
        
        for(int i=0; i<magazine.length(); i++){
            // can acess a string position by using .[pos]
            char m = magazine[i];
            magazineLetters[m]++;   // hash_map[key] => value
        }
        for(int j=0; j<ransomNote.length(); j++){
            
            // can access a string position by using .[pos];
            char r= ransomNote[j];
            
            int currentCount = magazineLetters[r];
            
            if(currentCount == 0 ){
                return false;
            }
            magazineLetters[r]--;
        }
        
        return true;
    }
};