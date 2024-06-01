#include "BaseballGame.h"
#include <cctype>
#include <stack>

Easy::BaseballGame::BaseballGame() {}

int Easy::BaseballGame::calPoints(std::vector<std::string> &operations) {
  std::stack<int> s;
  for (int i = 0; i < operations.size(); i++) {
    if (operations[i] == "+") {
      int b = s.top();
      s.pop();
      int a = s.top();
      s.push(b);
      s.push(a + b);
    } else if (operations[i] == "D") {
      s.push(s.top() * 2);
    } else if (operations[i] == "C") {
      s.pop();
    } else {
      s.push(stoi(operations[i]));
    }
  }

  int sum = 0;
  while (!s.empty()) {
    sum += s.top();
    s.pop();
  }
  return sum;
}
