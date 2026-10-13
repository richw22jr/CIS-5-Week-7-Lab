#include <iostream>


// Lab 7 — Richard Webster
// CIS 5 Week 07 · Two arrays

using std::cout;
using std::endl;

int main() {

const int N = 5;
int quiz[N] = {50, 40, 30, 20, 10};
int lab[N] = {100, 75, 50, 101, 15};
int sumquiz = 0;
int quizmax = quiz[0];
int sumlab = 0;
int labmax = lab[0];


cout << "Quiz" << endl;

for (int i = 0; i < N; ++i)
{
  cout << "[" << i << "] " << quiz[i] << endl;
  sumquiz += quiz[i];
  if (quiz[i] > quizmax)
  {
    quizmax = quiz[i];
  }
  
  
}
  cout << "Sum of quiz scores: " << sumquiz << endl;
  cout << "Highest quiz score: " << quizmax << endl;

  cout << "Lab" << endl;

  for (int i = 0; i < N; ++i)
{
  cout << "[" << i << "] " << lab[i] << endl;
  sumlab += lab[i];
  if (lab[i] > labmax)
  {
    labmax = lab[i];
  }
  
  
}
  cout << "Sum of lab scores: " << sumlab << endl;
  cout << "Highest lab score: " << labmax << endl;




  return 0;
}
