#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many scores?"; // ask user how many scores
    cin >> n;                         // take input from user and store it in n
    int *scores = new int[n];         // create a dynamic array of integer type variable scores of size n in runtime

    cout << "Enter " << n << " scores: "; // ask user to enter n scores
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i]; // take n scores input from user and store it in scores array
    }

    long long sum = 0; // create a long long type variable sum to store sum of all scores ( we use long long to avoid overflow)

    for (int i = 0; i < n; i++)
    {
        sum += scores[i]; // calculate sum of all scores and store it in sum
    }

    cout << "Average is: " << (double)sum / n << endl; // calculate and print average of all scores and convert sum to double to get precise average value

    delete[] scores;  // deallocate the memory of scores array
    scores = nullptr; // set scores to null pointer to avoid dangling pointer

    return 0;
}