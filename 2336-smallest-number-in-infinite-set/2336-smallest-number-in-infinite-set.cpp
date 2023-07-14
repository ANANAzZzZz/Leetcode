class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int, int> map;

    SmallestInfiniteSet() {
        for (int i = 1; i < 1200; i++) {
            this->pq.emplace(i);
            this->map.insert({i, i});
        }
    }
    
    int popSmallest() {
        int num = this->pq.top();

        this->pq.pop();
        this->map.erase(num);
        
        return num;
    }
    
    void addBack(int num) {
        if (this->map.find(num) == map.end()) {
            this->pq.emplace(num);
            this->map.insert({num, num});
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */