class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if (right < 2) return {-1, -1}; 
    
    vector<bool> prime(right + 1, true);
    prime[0] = prime[1] = false;
    
    for (int p = 2; p * p <= right; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= right; i += p)
                prime[i] = false;
        }
    }
    
    int prev = -1, num1 = -1, num2 = -1, minGap = right - left + 1;
    for (int p = max(2, left); p <= right; p++) {
        if (prime[p]) {
            if (prev != -1 && (p - prev < minGap)) {
                num1 = prev;
                num2 = p;
                minGap = p - prev;
            }
            prev = p;
        }
    }
    
    if (num1 == -1) return {-1, -1};
    return {num1, num2};
}
};