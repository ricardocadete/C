#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{

    int height;

    do
    {
        cout << "\n\nEnter with the pyramid height (1 - 40): $";
        cin >> height;
    }
    while(height <= 0 || height > 40);

    for(int i=0; i < height; i++)
    {
        for(int j = height - i; j > 1; j--)
        {
            printf(" ");
        }
        for(int z=0; z < i + 1; z++)
        {
            printf("#");
        }
        printf("\n");
    }
    Sleep(5000);
    return 0;
}