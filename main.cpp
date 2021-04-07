#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m;
    cin >> n >> m; //n=number of tickets ,,,, m=number of customer

    map<int, int> tickets;

    for(int i=0; i<n; i++){
            int t;
            cin >> t; 
            tickets[t]++;
    }

    for(int i = 0; i<m; i++){
            int price;
            cin >> price;
            auto it = tickets.upper_bound(price);
            it--;
            cout << (*it).first << endl ;
            (*it).second--;
    }



    return 0;
}