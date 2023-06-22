#include <iostream>
#include <algorithm>

using namespace std;
int n,m,area=0;
int arr[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0 ; i<n ; i++) {
        string s;
        cin >> s;
        for(int j=0 ; j<s.size() ; j++) {
            arr[i][j] = s[j]-'0';
        }
    }
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            if(arr[i][j] == 1) {
                if(i == 0 || j == 0) {
                    area = max(area, arr[i][j]);
                } else {
                    int temp = min(arr[i-1][j-1], min(arr[i][j-1], arr[i-1][j]));
                    arr[i][j] += temp;
                    area = max(area, arr[i][j]);
                }
            }
        }
    }
    cout << area*area;

    return 0;
}