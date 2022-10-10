class Solution {
public:
    int trap(vector<int>& h) {
        // edge case: empty input
        if (!h.size()) return 0;
        // support variables
        int i = 0, j = h.size() - 1, maxLeft = h[i], maxRight = h[j], res = 0, e;
        while (i <= j) {
            // case 1: i points to a bigger element, so we advance j
            if (h[i] > h[j]) {
                e = h[j];
                if (e > maxRight) maxRight = e;
                else res += maxRight - e;
                j--;
            }
            // case 2: j points to a bigger/equal element, so we advance i
            else {
                e = h[i];
                if (e > maxLeft) maxLeft = e;
                else res += maxLeft - e;
                i++;
            }
        }
        return res;
    }
};