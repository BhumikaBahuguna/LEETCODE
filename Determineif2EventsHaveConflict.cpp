class Solution {
public:
    vector<int> helper(vector<string>& ev) {
        string s = ev[0];
        string e = ev[1];
        int start_hour = stoi(s.substr(0, 2));
        int start_min = stoi(s.substr(3, 2));
        int end_hour = stoi(e.substr(0, 2));
        int end_min = stoi(e.substr(3, 2));

        int start_total = start_hour * 60 + start_min;
        int end_total = end_hour * 60 + end_min;

        return {start_total, end_total};
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        vector<int> e1 = helper(event1);
        vector<int> e2 = helper(event2);

        //if start time of event 1 is between e2 start and end
        //end time of event 1 is between e2 start and end

        return max(e1[0], e2[0]) <= min(e1[1], e2[1]);
    }
};
