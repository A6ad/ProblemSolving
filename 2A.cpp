//
// Created by asad on 1/19/26.
//
#include <bits/stdc++.h>
using namespace std;
class roundrecord {
public:
    string name;
    int score;

};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<roundrecord>rounds(n);
    map<string,int>total_score;

    for (int i=0;i<n;i++) {
        cin>>rounds[i].name>>rounds[i].score;
        total_score[rounds[i].name]+=rounds[i].score;
    }
    for (auto it = total_score.begin(); it != total_score.end(); it++) {
        const string& name = it->first;
        int score = it->second;
    }
    int max_score = -2000000000;

    for (auto it = total_score.begin(); it != total_score.end(); ++it) {
        int score = it->second;
        if (score > max_score) {
            max_score = score;
        }
    }

    map<string,int>current_score;
    for (int i=0;i<n;i++) {
        current_score[rounds[i].name]+=rounds[i].score;
        if (current_score[rounds[i].name] >= max_score && total_score[rounds[i].name] == max_score){
            cout<<rounds[i].name<<endl;
            break;
        }
    }
    return 0;
}
