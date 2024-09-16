class Solution {
// make a map
// initialize via constructor to contain closed brackets as key-value pair
// in the loop, handle closed brackets
// handle open brackets
// check for emopty stack

private:
unordered_map<char, char> mappings;

public:
    Solution()
    {
        mappings[')'] = '(';
        mappings['}'] = '{';
        mappings[']'] = '[';
    }
    bool isValid(string s) {
        // create a stack
        stack <char> stk;
        for (char c:s)
        {
            // handle a closed bracket
            // check if c is a closed bracket
            if( mappings.find(c) != mappings.end()) // found a closing bracket
            {
                //get the topElement or assign dummy
                char topElement=stk.empty() ? '#' : stk.top();
                // pop the last element
                if(!stk.empty()){
                    stk.pop();
                }
                // check if topelement is of different type
                if(topElement!= mappings[c]) // key(closed)- value(open)
                {
                    //mismatch of opening bracket
                    return false;
                }
            } // closing bracket handled
                else{ // it is an open bracket
                    //handle an opening bracket
                    stk.push(c); // push c to stack as opening bracket
                }
            
        }
        // finally return if stack is empty
        return stk.empty();
    }
};