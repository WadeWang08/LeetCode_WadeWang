class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0;
        int matters = 0;
        char curr = '0';

        for (int i = 0; i < chars.size(); i++) {
            if (chars[i] != curr) {
                // Input the previous counts
                if(count >= 10) {
                    std::string counts = std::to_string(count);
                    for (int j = 0; j < counts.size(); j++) {
                        chars[matters] = counts[j];
                        matters++;
                    }
                }
                if(count > 1 && count < 10) {
                    char counts = count + '0';
                    chars[matters] = counts;
                    matters++;
                }
                // For encountering different char
                curr = chars[i];
                count = 1;
                chars[matters] = curr;
                matters++;
            } else {
                // Start counting how many
                count++;
            }
        }
        if(count > 1) {
            string counts = std::to_string(count);
            for (int j = 0; j < counts.size(); j++) {
                chars[matters] = counts[j];
                matters++;
            }
        }
        return matters;
    }
};