#include "TemplateGenerator.h"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string leetCodeName;
  std::string difficulty;
  std::string id;
  std::string url;

  leetCodeName = UI::prompt("Input leetCodeName: ");
  do {
    difficulty = UI::prompt("Input difficulty(easy:1, medium:2, hard:3): ");
  } while (difficulty != "1" && difficulty != "2" && difficulty != "3");
  id = UI::prompt("Input id: ");
  url = UI::prompt("Input url: ");

  std::ofstream fout;
  std::ifstream fin;

  std::string path = "/home/rainbow/Desktop/"; // TODO: Add path from CMake
  std::string fileName = path + leetCodeName + ".cpp";

  fin.open(fileName);

  std::string response;
  if (fin.is_open()) {
    while (response != "y" && response != "n" && response != "Y" &&
           response != "N") {
      response = UI::prompt("Override existing file?(y/n): ");
    }
    if (response == "n" || response == "N") {
      printf("Closing.");
      fin.close();
      return 0;
    }
  }
  fout.open(fileName);

  fout << "leetCodeName: " << leetCodeName << std::endl;
  fout << "difficulty: " << difficulty << std::endl;
  fout << "id: " << id << std::endl;
  fout << "url: " << url << std::endl;

  fin.close();
  fout.close();

  return 0;
}

std::string UI::prompt(const char *message) {
  std::string input;
  std::cout << message;
  std::cin >> input;
  return input;
}
