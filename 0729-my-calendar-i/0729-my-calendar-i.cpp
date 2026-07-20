class MyCalendar {
public:

    vector<vector<int>> cal;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(int i =0; i<cal.size(); i++){
            if(startTime>= cal[i][1] || endTime<= cal[i][0]){
                continue;
            }
            else return false;
        }
        cal.push_back({startTime, endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */