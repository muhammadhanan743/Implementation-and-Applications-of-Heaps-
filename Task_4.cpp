#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int arr[] = { 4,3,6,8,4,6,2,4,5,9,7,4 };
    int n = 12;

    int maxFreq = 0;
    int maxElement = arr[0];

    for (int i = 0;i < n;i++)
    {
        int count = 0;

        for (int j = 0;j < n;j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    int indexes[100];
    int totalIndexes = 0;

    for (int i = 0;i < n;i++)
    {
        if (arr[i] == maxElement)
        {
            indexes[totalIndexes] = i;
            totalIndexes++;
        }
    }

    srand(time(0));

    int randomPosition = rand() % totalIndexes;

    cout << "Maximum Occurring Element = "
        << maxElement << endl;

    cout << "Selected Index = "
        << indexes[randomPosition] << endl;

    return 0;
}