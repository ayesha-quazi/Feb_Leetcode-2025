// Q: Remove All Occurrences of a Substring

class Solution {
    public:
        string removeOccurrences(string s, string part) {
            //s.length() = m
            //part.length() = n;
            //O(m*n)
            while(true) {
                int idx = s.find(part);
    
                if(idx == string::npos) {
                    break;
                }
    
                s.erase(idx, part.length());
            }
    
            return s;
        }
    };