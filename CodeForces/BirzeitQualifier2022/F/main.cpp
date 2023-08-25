#include <iostream>
using namespace std;

void sol(const string& word){
    int t = 0;
    for(int i = 0; i < word.length() - 2; i++){
        if(word.length() < 3) break;
        if( word[i] == 'b' && word[i+1] == 'z' && word[i+2] == 'u'){
            cout << "Yes\n";
            t = 1;
            break;
        }
    }
    if( t == 0) cout << "No\n";
}
int main() {
    int t;
    cin >> t;

    while(t!=0){
        string word;
        cin >> word;
        sol(word);
        t--;
    }
    return 0;
}
