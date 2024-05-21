#include "ValidAnagram.h"

Easy::ValidAnagram::ValidAnagram() {}

bool Easy::ValidAnagram::isAnagram(std::string s, std::string t) {
  if (s.size() != t.size())
    return false;
  const int MAX_SIZE = 26;
  int arr[MAX_SIZE] = {0};
  for (int i = 0; i < s.size(); i++) {
    arr[s[i] - 'a']++;
    arr[t[i] - 'a']--;
  }
  for (int i = 0; i < MAX_SIZE; i++) {
    if (arr[i] != 0)
      return false;
  }
  return true;
}
