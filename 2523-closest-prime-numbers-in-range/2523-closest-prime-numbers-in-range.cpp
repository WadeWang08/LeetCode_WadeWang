class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<int> result = {-1, -1};

        if (right < 2) {return result;}

        vector<bool> is_prime(right + 1, true); // 注意 + 1, 因为从0开始
        is_prime[0] = false;
        is_prime[1] = false;

        for (long long i = 2; i*i <= right; i++) {
            if (is_prime[i]) {
                for (long long j = i*i; j <= right; j+= i) {
                    is_prime[j] = false;
                }
            }
        }

        int prev_prime = -1;
        int diff = INT_MAX;
        for (int i = max(2, left); i <= right; i++) {
            if (is_prime[i]) {
                if (prev_prime != -1) {
                    int temp_diff = i - prev_prime;
                    if (temp_diff < diff) {
                        result[0] = prev_prime;
                        result[1] = i;
                        diff = temp_diff;
                    }
                    
                }
                prev_prime = i;
            }
        }
        return result;

    }
};