#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];

    }
    int score = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > 100) score -= 2;
        else if(arr[i] < 100) score += 5;
        else score += 2;
    }
    cout << score << endl;
}