class Solution {
public:
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    // Merge the two sorted subarrays into temp
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    // Copy remaining elements from left half
    while (i <= mid)
        temp.push_back(arr[i++]);

    // Copy remaining elements from right half
    while (j <= right)
        temp.push_back(arr[j++]);

    // Copy sorted elements back to original array
    for (int k = 0; k < temp.size(); ++k)
        arr[left + k] = temp[k];
}

// Recursive merge sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);        // Sort left half
    mergeSort(arr, mid + 1, right);   // Sort right half
    merge(arr, left, mid, right);     // Merge both halves
}

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};