#include <bits/stdc++.h>
using namespace std;

bool cmp(double a, double b) {
    return a > b;
}

int main()
{
    const int MAX = 1000000;
    srand(time(NULL));
    vector<double> vt;
    string testcase[10] = {"test1.txt", "test2.txt", "test3.txt", "test4.txt", "test5.txt", "test6.txt", "test7.txt", "test8.txt", "test9.txt", "test10.txt"};
    for (int i = 0; i < 10; i++) {
        ofstream fout(testcase[i]);
        for (int i = 0; i < MAX; i++) {
            double x = rand() / (RAND_MAX + 1.0) + (double)rand() / (RAND_MAX / 1000);
            vt.push_back(x);
        }
        if (i == 0) sort(vt.begin(), vt.end());
        if (i == 1) sort(vt.begin(), vt.end(), cmp);
        for (int i = 0; i < MAX; i++) fout << vt[i] << " ";
        vt.clear();
        fout.close();
    }
    return 0;
}
