class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ret;
        string now;
        
        for(int i = 1; i <= n; i++){
            if(i % 3 && i % 5) now = to_string(i);
            else{
                now = "";
                if(i % 3 == 0) now = "Fizz";
                if(i % 5 == 0) now += "Buzz";
            }
            ret.push_back(now);
        }
        return ret;
    }
};