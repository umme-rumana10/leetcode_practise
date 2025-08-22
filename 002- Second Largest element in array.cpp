class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;

        int largest = INT_MIN;
        int sec_largest = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                sec_largest = largest;
                largest = arr[i];
            } else if (arr[i] > sec_largest && arr[i] != largest) {
                sec_largest = arr[i];
            }
        }

        return (sec_largest == INT_MIN) ? -1 : sec_largest;
    }
};
