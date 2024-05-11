#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */
// @lc code=start
class MyStack {
    public:
    queue<int> q;
    queue<int> q1;
    
    MyStack() {}
    
    void push(int x) {
        while (!q.empty())
        {
            q1.push(q.front());
            q.pop();
        }
        q.push(x);
        while (!q1.empty())
        {
            q.push(q1.front());
            q1.pop();
        }
    }
    //  2 1 1 3
    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end