#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

map<string, int>wordCount;

bool compare(string a, string b) {
    if (wordCount[a] == wordCount[b] && a.length() == b.length())
        return a < b;
    else if (wordCount[a] == wordCount[b])
        return a.length() > b.length();
    else
        return wordCount[a] > wordCount[b];
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    vector<string>word;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str.length() < m)
            continue;
        if (wordCount.find(str) == wordCount.end()) {
            wordCount[str]++;
            word.push_back(str);
        }
        else
            wordCount[str]++;
    }

    sort(word.begin(), word.end(), compare);

    for (int i = 0; i < word.size(); i++)
        cout << word[i] << "\n";
}