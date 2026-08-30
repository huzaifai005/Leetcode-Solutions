class RecentCounter {
public:
    std::queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        int cutoff = t - 3000;
        while(q.front() < cutoff) {
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */