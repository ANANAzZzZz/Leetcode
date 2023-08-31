class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<string, int> count;
        
        int x = 0;
        int y = 0;
        count["0;0"]++;

        for (auto& side: path) {
            if (side == 'N') {
                y++;
            } else if (side == 'S') {
                y--;
            } else if (side == 'E') {
                x++;
            } else if (side == 'W') {
                x--;
            }

            string coordinate = to_string(x) + ";" + to_string(y); 

            if (count[coordinate]) {
                return true;
            }          
            count[coordinate]++;
        }

        return false;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)