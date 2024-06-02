#include "ValidParentheses.h"
#include <stack>
#include <unordered_map>

Easy::ValidParentheses::ValidParentheses() {}

bool Easy::ValidParentheses::isValid(std::string s) {
  std::stack<char> st;

  for (int i = 0; i < s.length(); i++) {
    if (st.empty()) {
      st.push(s[i]);
    } else if (s[i] == ')' && st.top() == '(' ||
               s[i] == ']' && st.top() == '[' ||
               s[i] == '}' && st.top() == '{') {
      st.pop();
    } else {
      st.push(s[i]);
    }
  }

  return st.empty();
}
