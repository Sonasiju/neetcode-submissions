class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string &str : strs) {
            encoded += to_string(str.size()) + "#" + str;
        }

        return encoded;

    }

    vector<string> decode(string s) {vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find the '#' delimiter
            while (s[j] != '#') {
                j++;
            }

            // Extract the length
            int len = stoi(s.substr(i, j - i));

            // Extract the string of that length
            result.push_back(s.substr(j + 1, len));

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return result;

    }
};
