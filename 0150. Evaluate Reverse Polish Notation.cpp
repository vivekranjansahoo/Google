class Solution {
public:
    long evalRPN(vector<string>& tokens) {
        string str=tokens.back();
        tokens.pop_back();
        if(str !="+" && str !="-" && str !="*" && str !="/"){
            return stoi(str);
        }
        else
        {
            long b=evalRPN(tokens);
            long a=evalRPN(tokens);
            if(str=="+"){
                return a+b;
            }
            else if(str=="-"){
                return a-b;
            }
            else if(str=="*"){
                return a*b;
            }
            else 
            return a/b;
        }
    }
};
