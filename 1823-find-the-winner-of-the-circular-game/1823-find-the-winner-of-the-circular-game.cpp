class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v(n);
        queue<int> q;

        // Fill vector
        for(int i = 0; i < n; i++) {
            v[i] = i + 1;
        }

        // Store indexes
        for(int i = 0; i < n; i++) {
            q.push(i);
        }

        while(q.size() > 1) {

            // Move k-1 people
            for(int i = 1; i < k; i++) {
                q.push(q.front());
                q.pop();
            }

            // Remove kth person
            q.pop();
        }

        return v[q.front()];
    }
};