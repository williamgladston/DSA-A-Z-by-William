class MyHashSet {
private:
    vector<int>hash;
public:
    MyHashSet() {  
    }
    
     bool contains(int key) {
        int n = hash.size();
        for(int i = 0 ; i < n ; i++){
            if(hash[i]==key)return true;
        }
        return false;
    }

    void add(int key) {
        if(!contains(key))hash.push_back(key);
    }
    
    void remove(int key) {
    if (contains(key)) {
        hash.erase(find(hash.begin(), hash.end(), key));
    }
}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */