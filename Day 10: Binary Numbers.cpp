#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,b;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int count = 0;

while (n) {
    n = (n & (n << 1));
    count++;
}
printf ("%d\n", count);

return 0;

    
}
