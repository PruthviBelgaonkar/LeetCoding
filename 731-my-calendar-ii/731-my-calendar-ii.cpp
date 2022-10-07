class MyCalendarTwo {
public:
    map<int,int>mp;
    MyCalendarTwo() {
        
    }
    
    bool book(int s, int e) {
        mp[s]++;
        mp[e]--;
        int bk = 0;
        for(pair<int,int>it:mp)
        {  
           bk+=it.second;
            if(bk==3)
            {
                mp[s]--;
                mp[e]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */