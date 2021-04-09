#include<bits/stdc++.h>
using namespace std;

int main(){
        long long N;
        cin >> N;
        long long arr[N];
        for(int i=0; i<N; i++){
                cin>>arr[i];
        }
         set<long long> s;
         s.insert(-1);
         for(int i=0; i<N; i++){
                 s.insert(arr[i]);
                 auto it = s.find(arr[i]);
                 cout << (*--it) << "\n";
         }



  return 0;
}

      
