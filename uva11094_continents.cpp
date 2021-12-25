#include <iostream>
#include <cstring>
using namespace std;

int M,N,counts,xx,yy,max_count;
char map[20][20],land;

int dfs(int y, int x) {
    if ( y < 0 || y >= M)  {
        return 0;
    }
    if ( x < 0 ) {
        x += N;
    }
    if ( x >= N ) {
        x -= N;
    }
    if ( map[y][x] == land ) {
        int search_result = 1;
        map[y][x] = 0;
        search_result += dfs(y+1,x);
        search_result += dfs(y-1,x);
        search_result += dfs(y,x+1);
        search_result += dfs(y,x-1);
        return search_result;
    }
    return 0;
}

int main() {
    cin >> M >> N;
    string input;
    while (true) {
        memset(map,0,sizeof(map));
        max_count = 0;
        for (int i = 0; i < M; i++) {
            cin >> input;
            for (int j = 0; j < N; j++) {
                // Assign each char to map
                map[i][j] = input[j];
            }
        }
        cin >> yy >> xx;
        land = map[yy][xx];
        dfs(yy, xx);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                counts = dfs(i, j);
                if (counts > max_count) {
                    max_count = counts;
                }
            }
        }
        cout << max_count << endl;
    }
}