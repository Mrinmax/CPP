#include <bits/stdc++.h>
using namespace std;

void pattern2(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // This is the inner loop which loops for the columns
        // no. of columns = row number for each line here.
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int N = 5;

    pattern2(N);

    return 0;
}