#define f first
#define s second
class LRUCache {
private:
    list<int> order;
    int maxs=0;
    unordered_map<int,pair<int,list<int>:: iterator>> mp;  
    void touch(int id){
        order.erase(mp[id].s);
        order.push_front(id);
        mp[id].s=order.begin();
    }  
public:
    LRUCache(int capacity) {
        maxs=capacity;
        mp.clear();
        order.clear();
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            touch(key);
            return mp[key].f;
        }else
            return -1;
        
    }
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            touch(key);
        }else{
            if(mp.size()==maxs){
                int del=order.back();
                mp.erase(del);
                order.pop_back();
            }
            order.push_front(key);
        }
        mp[key]= make_pair(value,order.begin());
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
