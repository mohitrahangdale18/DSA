class Solution {
public:
    string compare(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '#') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(s[i]);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        string ss = compare(s);

        string tt = compare(t);

        return ss == tt;
    }
};