class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> waitedDays(size,0);
        stack<int> s;

        for (int index = 0; index < size; index++) {
            while (!s.empty() && temperatures[index] > temperatures[s.top()]) { //* stack not empty & this temp > last temp
                int prevIndex = s.top(); // save prev index
                s.pop(); // pop prev index from stack
                waitedDays[prevIndex] = index - prevIndex;
            }
            s.push(index); // push index
        }

        return waitedDays;
    }
};