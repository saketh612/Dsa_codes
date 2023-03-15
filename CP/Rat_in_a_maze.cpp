class Solution{
    private :
    bool check(vector<vector<int>>&visited,int n,int x,int y,vector<vector<int>>m)
    {
        if((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
        {
            return true;
        }
        else
        {
          return false;  
        }
    }
    
    void solve(vector<vector<int>> m,int n,int src_x,int src_y,string &output,vector<string>&ans,vector<vector<int>>&visited)
   {
       if(src_x==n-1 && src_y==n-1)
       {
           ans.push_back(output);
           return;
       }
       
       visited[src_x][src_y]=1;
       //Down
       int x = src_x+1;
       int y = src_y;
       if(check(visited,n,x,y,m))
       {
           output.push_back('D');
           solve(m,n,x,y,output,ans,visited);
           output.pop_back();
       }
       //left
        x = src_x;
        y = src_y-1;
       if(check(visited,n,x,y,m))
       {
           output.push_back('L');
           solve(m,n,x,y,output,ans,visited);
           output.pop_back();
       }
       
       // right
       
        x = src_x;
        y = src_y+1;
       if(check(visited,n,x,y,m))
       {
           output.push_back('R');
           solve(m,n,x,y,output,ans,visited);
           output.pop_back();
       }
       
       //top
        x = src_x-1;
        y = src_y;
       if(check(visited,n,x,y,m))
       {
           output.push_back('U');
           solve(m,n,x,y,output,ans,visited);
           output.pop_back();
       }
       
          visited[src_x][src_y] = 0;
   }
   
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        int src_x =0;
        int src_y =0;
        if(m[src_x][src_y]==0)
        {
            return ans;
        }
        vector<vector<int>>visited(n, vector<int>(n, 0));
        string output ="";
        solve(m,n,src_x,src_y,output,ans,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }
};