// Climbing the Leaderboard | HackerRank

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> climbingTheLeaderboard(vector<int> scores, vector<int> playerScores)
{
    vector<int> order;
    vector<int>::iterator it;
    it = unique(scores.begin(), scores.end()); // remove the duplicates
    scores.resize(distance(scores.begin(), it));
    int len1 = scores.size();
    int len2 = playerScores.size();
    int n = len1 - 1;
    for (size_t i = 0; i < len2; i++)
    {
        int rank = 0;
        while (n >= 0 && playerScores[i] >= scores[n])
            n--;

        if (n == -1)
            rank = 1;
        else if (playerScores[i] == scores[n])
            rank = n + 1;
        else if (playerScores[i] < scores[n])
            rank = n + 2;

        order.push_back(rank);
    }
    return order;
}
int main()
{
    int no_of_players, no_of_games;
    cin >> no_of_players;
    vector<int> scores, playerScores, res;
    int score;
    for (size_t i = 0; i < no_of_players; i++)
    {
        cin >> score;
        scores.push_back(score);
    }
    cin >> no_of_games;
    for (size_t i = 0; i < no_of_games; i++)
    {
        int score;
        cin >> score;
        playerScores.push_back(score);
    }
    res = climbingTheLeaderboard(scores, playerScores);
    for (size_t i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}