class Solution {
public:
    int maximalRectangle(vector<vector<char>>& v) {
        
        if (v.empty()) return 0;

        int row = v.size();
        int colm = v[0].size();

        vector<int> h(colm, 0);
        int m = 0;

        // Process every row
        for (int j = 0; j < row; j++) {

            // Convert current row into histogram
            for (int i = 0; i < colm; i++) {
                if (v[j][i] == '1')
                    h[i] += 1;
                else
                    h[i] = 0;
            }

            int n = h.size();

            // ---------------- NSE ----------------
            stack<int> st;
            vector<int> nse(n);

            for (int i = n - 1; i >= 0; i--) {

                while (!st.empty() && h[st.top()] >= h[i]) {
                    st.pop();
                }

                if (st.empty())
                    nse[i] = n;
                else
                    nse[i] = st.top();

                st.push(i);
            }

            // ---------------- PSE ----------------
            stack<int> gt;
            vector<int> pse(n);

            for (int i = 0; i < n; i++) {

                while (!gt.empty() && h[gt.top()] >= h[i]) {
                    gt.pop();
                }

                if (gt.empty())
                    pse[i] = -1;
                else
                    pse[i] = gt.top();

                gt.push(i);
            }

            // ---------------- Calculate Area ----------------
            for (int i = 0; i < n; i++) {

                int height = h[i];

                int width = nse[i] - pse[i] - 1;

                int area = height * width;

                m = max(m, area);
            }
        }

        return m;
    }
};