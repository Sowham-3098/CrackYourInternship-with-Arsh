class Solution {
public:
bool isPossible(int a[], int b[], int n, int k)
{
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++)
        if (a[i] + b[i] < k)
            return false;
    return true;
}
};
