#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;
int random_in_range(int minimum, int maximum)
{ // Function to generate random numbers from the range you give it;
    int result;

    srand(time(0));
    result = rand() % (maximum - minimum + 1) + minimum; // generate a nubmer between 100 to 999;
    return result;
}
void hit_and_miss(int generated, int guess, int *hits, int *misses)
{
    int no_hit = 0, no_miss = 0;
    string guess_str = to_string(guess);
    string generated_str = to_string(generated);
    int hit = 0, miss = 0;
    for (int i = 0; i < 3; i++)
    {

        if (generated_str[i] == guess_str[i])
            hit++;
        for (int j = 0; j < 3; j++)
        {
            if (i != j)
            {
                if (generated_str[i] == guess_str[j])
                    miss++;
            }
        }
    }
    *hits = hit;
    *misses = miss;
}
int main()
{
    int guess = 0, generated, hits, misses, attempts = 0;
    string guess_str, generated_str;
    generated = random_in_range(100, 999); // generate a random number from 3 digit
    cout << "Please Enter a 3 digit number" << endl;
    cin >> guess;
    hit_and_miss(generated, guess, &hits, &misses);
    attempts++;
    if (hits == 3)
    {
        cout << "The game is over" << endl;
        cout << "No of Attempts is " << attempts << endl;
    }
    else
    {
        cout << hits << " hit " << misses << " miss" << endl;
    }

    while (hits != 3)
    {
        cout << generated << endl;
        cout << "Please Enter another 3 digit number" << endl;
        cin >> guess;
        hit_and_miss(generated, guess, &hits, &misses);
        attempts++;
        if (hits != 3)
            cout << hits << " hit " << misses << " miss" << endl;
    }
    cout << "The game is over" << endl;
    cout << "No of Attempts is " << attempts << endl;
}
