// Author : Ashraf Emad 
// 764A - Taymyr is calling you

#include <iostream>
using namespace std;
int main(void)
{
    int n, m, z, i, j, count;

    while (cin >> n >> m >> z)
    {
        count = 0;

        for (i = n; i <= z; i += n)
            for (j = m; j <= i; j += m)
                if (i == j)
                    count++;
        cout << count << endl;
    }

    return 0;
}

// Printing the solution
// 1 1 10 => n = 1, m = 1, z = 10
// Total mins of day :              1     2     3    4    5    6    7    8    9    10
// Ilia-alpinist calls every 1 :   call  call  call call call call call call call call
// Artists come every 1 :         come   come  come  come and so on

// so every come artist = every call then all artists will be dead