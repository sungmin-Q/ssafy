#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
const int MAX = 1e5 + 5;
int height, width;
int black_height, black_width;
int apartment[1005][1005];
int black[1005][1005];
bool visited[MAX];

int main() {
    cin >> height >> width;
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++) {
            int x;
            cin >> x;
            apartment[i][j] = x;
        }

    cin >> black_height >> black_width;
    for (int i = 0; i < black_height; i++)
        for (int j = 0; j < black_width; j++) {
            int x;
            cin >> x;
            black[i][j] = x;
            visited[x] = true;
        }

    int citizen = 0, blacklist = 0;
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++) {
            if (visited[apartment[i][j]])
                blacklist++;
            else
                citizen++;
        }

    cout << blacklist << endl << citizen << endl;
    return 0;
}
