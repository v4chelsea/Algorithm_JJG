class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stk1;
        stack<int> stk2;
        stack<int> stk3;
        vector<int> answer;
        
        for(int i=temperatures.size()-1; i>=0; i--) {
            stk1.push(temperatures[i]);
        }
        
        stk2.push(stk1.top());
        stk1.pop();
        
        while(!stk1.empty()) {
            if(stk1.top() > stk2.top()) {

                if(stk3.empty()) {
                    answer.push_back(stk3.size()+1);
                } else { 
                    answer.push_back(stk3.size());
                    stk1.pop();
                }
                while(!stk3.empty()) {
                    stk1.push(stk3.top());
                    stk3.pop();
                }
                
                stk2.pop();
                if(!stk1.empty()) {
                    stk2.push(stk1.top());
                    stk1.pop();
                }
            } else {
                stk3.push(stk1.top());
                stk1.pop();
                
                if(!stk1.empty()) {
                    if(stk1.top() > stk2.top()) {
                        stk3.push(stk1.top());
                    }
                } else {
                    answer.push_back(0);
                    
                    while(!stk3.empty()) {
                        stk1.push(stk3.top());
                        stk3.pop();
                    }
                
                    stk2.pop();
                    
                    if(!stk1.empty()) {
                        stk2.push(stk1.top());
                        stk1.pop();
                    }
                }
            }
        }
        
        for(int i=0; i<stk2.size(); i++) {
            answer.push_back(0);
        }
        
        return answer;
    }
};
