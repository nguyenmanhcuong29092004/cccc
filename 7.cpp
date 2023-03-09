
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // t la so luong cap xau can kiem tra
    int t; cin >> t;
    while (t--) {
        string a,b;
        cin >> a >> b;
        int s1 = a.length();
        int s2 = b.length();
        // sap xep xau 1 theo thu tu abc
        for (int i = 0; i < s1; i++) {
            for (int j =  i+1; j < s1; j++) {
               if(a[i] > a[j])
            {    char tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            }
        }
        // sap xep xau 2 theo thu tu abc
        for (int i = 0; i < s2; i++) {
            for (int j =  i+1; j < s2; j++) {
                if (b[i] > b[j])
            {   char tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
            }
        }
        if (s1 != s2) cout << "No" << endl;
        else {
            // so sanh xem 2 xau co giong nhau khong
            int cnt = 0;
            for (int i = 0; i < s1; i++) {
                if (a[i] == b[i] ) cnt++;
            }
            if (cnt == s1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
     //  t--;
    }

    return 0;
}
