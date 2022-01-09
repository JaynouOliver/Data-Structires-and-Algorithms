#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Bottom Up Approach;
int minimumNumberofCoinsForChange(int m, vector<int> denoms){
    vector<int> dp(m+1, 0);
    dp[0] = 0;


    for (int i = 0; i < m; i++)
    {
        dp[i] = INT_MAX;
        for(int c : denoms){
            if (i-c >= 0  and dp[i-c] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i-c] + 1);

            }
            
        }

    }
    return dp[m] == INT_MAX? -1 : dp[m];
    
    
}


int main(){

    vector <int> denoms = {1, 5, 7, 10};
    int m = 16;
    cout << minimumNumberofCoinsForChange(m, denoms) << endl;


    return 0;
}