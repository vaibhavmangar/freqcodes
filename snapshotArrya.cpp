class SnapshotArray {
public:
    vector<vector<pair<int,int>>> arr;//timer ,val in each index
    int timer;
    SnapshotArray(int length) {
        arr.resize(length);
        timer=0;
    }
    
    void set(int index, int val) {
        while(!arr[index].empty() and arr[index].back().first==timer){
            arr[index].pop_back();//why while
        }
        arr[index].push_back({timer,val});
    }
    
    int snap() {
        return timer++;
    }
    
    int get(int index, int snap_id) {
        auto it=lower_bound(arr[index].begin(),arr[index].end(),make_pair(snap_id,INT_MAX));
        if(it==arr[index].begin()){
            return 0;
        }else{
            --it;
            return it->second;
        }
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
