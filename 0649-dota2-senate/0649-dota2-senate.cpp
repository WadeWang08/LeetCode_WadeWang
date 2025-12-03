class Solution {
public:
    string predictPartyVictory(string senate) {
        
        int n = senate.length();
        queue<int> d;
        queue<int> r;
        int seq = 0;
        for (char c : senate) {
            if (c == 'D') {
                seq++;
                d.push(seq);
            } else {
                seq++;
                r.push(seq);
            }
        }
        while (!d.empty() && !r.empty()) {
            if (d.front() > r.front()) {
                d.pop();
                r.push(r.front() + n);
                r.pop();
            } else {
                r.pop();
                d.push(d.front() + n);
                d.pop();
            }
        }
        string result = "Dire";
        if (d.empty()){
            result = "Radiant";
        }
        return result;

    }
};