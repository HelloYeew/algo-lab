#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    
    vector<pair<int,int>> banner;

    int a;

    for(int i=0;i<n;i++) {
        cin >> a;
        banner.push_back(make_pair(i, a));
    }

    // There are N poles on a straight line. For 1 <= i <= N, pole i is of height Hi. You are planning to
    // have a banner of height K (1 <= K <= 20). To set up a banner, you want two poles whose heights
    // differ by at most K and there is no other poles of the same heights in between. (Formally, to attach
    // a banner you want two indices a and b (a < b) such that |Ha - Hb| <= K, and for all j such that a < j
    // < b, Hj is not equal to Ha or Hb).
    // You want to attach the largest possible banner. That is, you want to find two indices a and b that
    // maximize |b – a|. 

    int max_height = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(banner[i].first - banner[j].first) == 1) {
                // if banner has same height and more tham max_height, update max_height
                if ( && banner[i].second > max_height) {
                    max_height = banner[i].second;
                }
            } else {
                // check between these two that 
            }
        }
    }
    


}