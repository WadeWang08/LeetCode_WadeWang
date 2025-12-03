class Solution {
public:
    string decodeString(string s) {
        stack<int> count;
        stack<string> parts;
        int cur_num = 0;
        string cur_str = "";

        for (char c : s) {
            switch (c) {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    cur_num = cur_num * 10 + (c - '0');
                    break;
                case '[':
                    count.push(cur_num);
                    parts.push(cur_str);
                    cur_num = 0;
                    cur_str = "";
                    break;
                case ']': {
                    int k = count.top();
                    count.pop();
                    string previous = parts.top();
                    parts.pop();

                    string repeated = "";
                    for (int i = 0; i < k; i++) {
                        repeated += cur_str;
                    }
                    cur_str = previous + repeated;
                    break;
                }
                default:
                    cur_str += c;
                    break;
            }
        }
        return cur_str;
    }
};