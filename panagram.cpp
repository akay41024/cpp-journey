#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> st;
    for(int i = 0; i < s.length(); i++){
        st.insert(s[i]);
    }
    if(st.size() == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}