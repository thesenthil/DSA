class Solution {
public:
    void findFirstOccurrence(vector<int>& arr, int n, int target, int &ansIndex) {
        int s = 0, e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == target) {
                ansIndex = mid;
                e = mid - 1;
            }
            else if (arr[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
 void findLastOccurrence(vector<int>& arr, int n, int target, int &ansIndex) {
        int s = 0, e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == target) {
                ansIndex = mid;
                s = mid + 1;
            }
            else if (arr[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int first = -1;
        findFirstOccurrence(arr, n, target, first);
        if (first == -1)
            return 0;
        int last = -1;
        findLastOccurrence(arr, n, target, last);
        return last - first + 1;
    }
};