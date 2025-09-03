class Solution {
public:
    string gcdOfStrings(string str1, string str2){
        int g = std::gcd(str1.size(), str2.size());
        string dividant = str1.substr(0, g);
        
        for(int i = 0; i < str1.size(); i++){
            if(str1[i] != dividant[i%g]){
                dividant = "";
                break;
            }
         }
        for(int i = 0; i < str2.size(); i++){
            if(str2[i] != dividant[i%g]){
                dividant = "";
                break;
             }
        }
    return dividant;
    }
};