#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int> v;
        int n, nums,position,a,b, size;
        cin >> n;
        for(int i=0; i < n; i++){
                cin >> nums;
                v.push_back(nums);
        }
        
        cin >> position >> a >> b;
        
         v.erase(v.begin()+(position-1));
         v.erase(v.begin()+a-1, v.begin()+b-1);
        
        size = v.size();
        cout << size << "\n";

        for(int j=0; j<size; j++){
                cout << v[j] << " " ;
        }
        

        return 0;


}