#define u_map unordered_map
#define F first
#define S second
class LFUCache {
private:
    int cap,size=0,lfu=0;
    u_map<int,list<int>> ftoll;
    u_map<int,pair<int,int>> values;
    u_map<int,list<int>:: iterator> ktoit;
    void update(int key){
        int freq=values[key].S;
        auto iter=ktoit[key];
        ftoll[freq].erase(iter);
        values[key].S++;
        ftoll[1+freq].push_back(key);
        ktoit[key]=--ftoll[1+freq].end();
        if(ftoll[lfu].empty()) lfu++;
    }
public:
    LFUCache(int n) {
        this->cap=n;
    }
    
    int get(int key) {
        if(values.find(key)!=values.end()){
            update(key);
            return values[key].F;
        }else return -1;
    }
    
    void put(int key, int value) {
        if(!cap) return;
        if(values.find(key)!=values.end()){
            values[key].F=value;
            update(key);
        }else{
            if(cap==size){
                int todel=ftoll[lfu].front();
                ftoll[lfu].pop_front();
                values.erase(todel);
                ktoit.erase(todel);
            }else
                size++;
            // create and push
            values[key]={value,1};
            ftoll[1].push_back(key);
            ktoit[key]=--ftoll[1].end();
            lfu=1;
        }
    }
};
