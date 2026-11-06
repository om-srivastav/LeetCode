
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        // 1. Rearrange logs to {time, server_id} so standard sort naturally sorts by time
        vector<pair<int, int>> sorted_logs;
        for (const auto& log : logs) {
            sorted_logs.push_back({log[1], log[0]}); 
        }
        sort(sorted_logs.begin(), sorted_logs.end());

        // 2. Keep track of the original position of queries
        int num_queries = queries.size();
        vector<pair<int, int>> sorted_queries; // {query_time, original_index}
        for (int i = 0; i < num_queries; i++) {
            sorted_queries.push_back({queries[i], i});
        }
        sort(sorted_queries.begin(), sorted_queries.end());

        // 3. Setup tracking arrays and pointers
        vector<int> ans(num_queries);
        vector<int> server_counts(n + 1, 0); // 1-indexed array to count server frequencies
        
        int left = 0;
        int right = 0;
        int active_servers = 0;

        // 4. Run the sliding window
        for (int i = 0; i < num_queries; i++) {
            int query_time = sorted_queries[i].first;
            int original_idx = sorted_queries[i].second;

            int start_time = query_time - x;
            int end_time = query_time;

            // Expand window: Add logs that are within the current query time
            while (right < sorted_logs.size() && sorted_logs[right].first <= end_time) {
                int server_id = sorted_logs[right].second;
                if (server_counts[server_id] == 0) {
                    active_servers++;
                }
                server_counts[server_id]++;
                right++;
            }

            // Shrink window: Remove logs that happened before (query_time - x)
            while (left < sorted_logs.size() && sorted_logs[left].first < start_time) {
                int server_id = sorted_logs[left].second;
                server_counts[server_id]--;
                if (server_counts[server_id] == 0) {
                    active_servers--;
                }
                left++;
            }

            // Result is total servers minus the ones that received requests
            ans[original_idx] = n - active_servers;
        }

        return ans;
    }
};
