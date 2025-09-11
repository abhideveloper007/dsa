class Solution {
public:
    int checkpan(vector<int>& ans) {
        int res = 1;   // assume true, prove false if missing
        int i = 0;
        while (i < 26) {
            if (ans[i] == 0) {
                res = 0;   // letter missing
                break;     // no need to check further
            }
            i++;
        }
        return res;
    }

    bool checkIfPangram(string sentence) {
        vector<int> ans(26, 0);
        int i = 0;
        
        while (i < sentence.size()) {
            int pos = sentence[i] - 'a';
            ans[pos] = ans[pos] + 1;
            i++;
        }

        if (checkpan(ans)) return true;
        else return false;
    }
};
