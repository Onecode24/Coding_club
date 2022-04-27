#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,stud,a;
    cin>>n;
    while (n--)
    {
        vector<int> level,sum;
        cin >> stud;
        for(int i(0); i<stud; i++){
            cin>>a;
            level.push_back(a);
        }
        sort(level.begin(),level.end());
        // for(int i : level) cout<<i<<" ";
        // cout<<endl;
        int j=level.size()-1;
        for(int i(0); i<(level.size()/2); i++){
            a=level[i]+level[j];
            sum.push_back(a);
            j--;
        }
        sort(sum.begin(),sum.end());
        cout<<sum[sum.size()-1]-sum[0]<<endl;
        // for(int i : sum) cout<<i<<" ";
        // cout<<endl;
    }
    

    return 0;
}