class Solution {
    private:
    
        void solve(string digits,vector<string>&ans,string data[],string output,int i)
        {
            if(i>=digits.length())
            {
                ans.push_back(output);
                return;
            }

            int number = digits[i]-'0';
            string check = data[number];
            for(int j=0;j<check.length();j++)
            {
                output.push_back(check[j]);
                solve(digits,ans,data,output,i+1);
                output.pop_back();
            }

        }

public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string data[10] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output ="";
        int index =0;
        solve(digits,ans,data,output,index);
        return ans;
    }
};