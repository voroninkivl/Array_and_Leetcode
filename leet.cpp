//1

//class Solution {
//public:
//    int partition(vector<int>& arr, int start, int end)
//    {
//        int index = start;
//        int pivot = arr[end];
//        int t{ 0 };
//        for (int i = start; i < end; i++)
//        {
//            if (arr[i] <= pivot)
//            {
//                t = arr[i];
//                arr[i] = arr[index];
//                arr[index] = t;
//                index++;
//            }
//        }
//        t = arr[index];
//        arr[index] = pivot;
//        arr[end] = t;
//        return index;
//    }
//    void quicksort(vector<int>& arr, int start, int end)
//    {
//        if (start >= end)
//        {
//            return;
//        }
//        int pivot = partition(arr, start, end);
//        quicksort(arr, start, pivot - 1);
//        quicksort(arr, pivot + 1, end);
//    }
//    int minimumDifference(vector<int>& arr, int k)
//    {
//        if (k == 1)
//        {
//            return 0;
//        }
//        quicksort(arr, 0, size(arr) - 1);
//        int result = INT_MAX;
//        for (int i = 0; i <= size(arr) - k; i++)
//        {
//            result = min(arr[i + k - 1] - arr[i], result);
//        }
//        return result;
//    }
//};

//2
//class Solution {
//public:
//    int count(vector<int>& arr, int size, int num)
//    {
//        int amount = 0;
//        for (int i = 0; i < size; i++)
//        {
//            if (arr[i] == num)
//            {
//                amount++;
//            }
//        }
//        return amount;
//    }
//    int findLucky(vector<int>& arr)
//    {
//        int max = -1;
//        for (int i = 0; i < size(arr); i++)
//        {
//            if (arr[i] == count(arr, size(arr), arr[i]))
//            {
//                if (arr[i] > max) max = arr[i];
//            }
//        }
//        return max;
//    }
//};
//3
//class Solution {
//public:
//    int majorityElement(vector<int>& array) {
//        int n = size(array);
//        sort(array.begin(), array.end());
//        return array[n / 2];
//    }
//};