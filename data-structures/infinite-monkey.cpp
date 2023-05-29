#include <iostream>
#include <random>
#include <string>

using namespace std;

string generateRandomSentence(int length)
{
  string possibleChars = "abcdefghijklmnopqrstuvwxyz ";
  string sentence;

  for (int i = 0; i < length; i++)
  {
    sentence += possibleChars[rand() % possibleChars.size()];
  }

  return sentence;
}

string generateBetterGuess(string &current, string target)
{
  if (current.empty())
    return generateRandomSentence(target.size());

  string possibleChars = "abcdefghijklmnopqrstuvwxyz ";

  for (int i = 0; i < current.size(); i++)
  {
    if (current[i] != target[i])
    {
      current[i] = possibleChars[rand() % possibleChars.size()];
      break;
    }
  }

  return current;
}

int getSentenceScore(string sentence, string target)
{
  if (sentence.size() != target.size())
    return 0;

  int score = 0;

  for (int i = 0; i < target.size(); i++)
  {
    if (target[i] == sentence[i])
      score++;
  }

  return score;
}

void simulate()
{
  string target = "methinks it is like a weasel";
  int bestScore = 0;
  string bestSentence = "";
  int round = 0;
  while (true)
  {
    round++;
    bestSentence = generateBetterGuess(bestSentence, target);

    cout << "Round: " << round << endl
         << "Best sentence so far: " << bestSentence << endl;

    if (bestSentence.compare(target) == 0)
      break;

    // int score = getSentenceScore(sentence, target);

    // if (score > bestScore)
    // {
    //   bestScore = score;
    //   bestSentence = sentence;
    // }

    // if (round % 1000 == 0)
    // {
    //   cout << "Round: " << round << endl
    //        << "Best sentence so far: " << bestSentence
    //        << " with a score of " << bestScore << ".\n"
    //        << endl;
    // }
  }
}

int main()
{
  simulate();
  return 0;
}