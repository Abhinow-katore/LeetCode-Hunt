class Solution
{
public:
    vector<int> ans;

    // merge function

    void merge_function(vector<pair<int, int>> &arr, int left, int mid, int right)
    {
        vector<pair<int, int>> temp(right - left + 1);

        int i = left;

        int j = mid + 1;

        int k = 0;

        int smaller_on_right = 0;

        while (i <= mid && j <= right)
        {
            if (arr[i].first <= arr[j].first)
            {
                ans[arr[i].second] += smaller_on_right;

                temp[k++] = arr[i++];
            }
            else
            {
                smaller_on_right++;

                temp[k++] = arr[j++];
            }
        }

        while (i <= mid)
        {
            ans[arr[i].second] += smaller_on_right;

            temp[k++] = arr[i++];
        }

        while (j <= right)
        {
            temp[k++] = arr[j++];
        }

        k = 0;

        for (int i = left; i <= right; i++)
        {
            arr[i] = temp[k++];
        }
    }

    // function for merge sort

    void merge_sort(vector<pair<int, int>> &arr, int left, int right)
    {
        if (left < right)
        {
            int mid = left + (right - left) / 2;

            merge_sort(arr, left, mid);

            merge_sort(arr, mid + 1, right);

            merge_function(arr, left, mid, right);
        }
    }

    vector<int> countSmaller(vector<int> &nums)
    {

        int n = nums.size();

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            arr[i] = {nums[i], i};
        }

        ans.assign(n, 0);

        merge_sort(arr, 0, n - 1);

        return ans;
    }
};
