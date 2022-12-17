// https://leetcode.com/problems/k-closest-points-to-origin/

class Solution
{
public:
    int dist(vector<vector<int>> &points, int i)
    {
        return pow(points[i][0], 2) + pow(points[i][1], 2);
    }

    int partition(vector<vector<int>> &points, int i, int j)
    {

        int oi = i;
        int pivot = dist(points, i);
        i += 1;
        while (true)
        {
            while (i < j && dist(points, i) < pivot)
                i += 1;
            while (i <= j && dist(points, j) >= pivot)
                j -= 1;
            if (i >= j)
                break;
            vector<int> tmp = points[i];
            points[i] = points[j];
            points[j] = tmp;
        }
        vector<int> tmp = points[oi];
        points[oi] = points[j];
        points[j] = tmp;
        return j;
    }

    void sort(vector<vector<int>> &points, int i, int j, int K)
    {

        if (i >= j)
            return;
        // Put random element as A[i] - this is the pivot
        srand(1);
        int k = rand() % (j - i) + i;
        vector<int> tmp = points[i];
        points[i] = points[k];
        points[k] = tmp;
        int mid = partition(points, i, j);
        // mid - i + 1 : the size of former partition
        if (K < mid - i + 1)
        {
            sort(points, i, mid - 1, K);
        }
        else if (K > mid - i + 1)
        {
            sort(points, mid + 1, j, K - (mid - i + 1));
        }
    }
    vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
    {
        sort(points, 0, points.size() - 1, K);
        vector<vector<int>> ans(points.begin(), points.begin() + K);
        return ans;
    }
};