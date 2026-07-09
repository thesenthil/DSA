#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void findFirstOccurence(vector<int>& arr, int n, int target, int &ansIndex) {
        int s = 0;
        int e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                ansIndex = mid;
                e = mid - 1;
            }
            else if (target > arr[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
    void findLastOccurrence(vector<int>& arr, int n, int target, int &ansIndex) {
        int s = 0;
        int e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                ansIndex = mid;
                s = mid + 1;
            }
            else if (target > arr[mid]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
    int countOccurrences(vector<int>& arr, int target) {
        int n = arr.size();
        int firstOccIndex = -1;
        findFirstOccurence(arr, n, target, firstOccIndex);
        if (firstOccIndex == -1)
            return 0;
        int lastOccIndex = -1;
        findLastOccurrence(arr, n, target, lastOccIndex);
        return lastOccIndex - firstOccIndex + 1;
    }
};
int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4};
    int target = 2;
    Solution obj;
    cout << obj.countOccurrences(arr, target);
    return 0;
}