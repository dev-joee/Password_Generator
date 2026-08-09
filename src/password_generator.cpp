#include "../headers/password.h"

bool Main_checkbinaryresponce(char b) {
  return b == 'y' || b == 'Y' || b == 'n' || b == 'N';
}
char Main_getcorrectbinaryresponce(string msg) {
char b;
  cout << msg;
  cin >> b;
  while (!Main_checkbinaryresponce(b)) {
    cout << "Invalid length, plz try again :(\n\n";
    cout << msg;
    cin >> b;
  }
  return b;
}
bool Main_getbinaryresponce(string msg, bool firsttime = 0) {
  if (firsttime) return true;
char b = Main_getcorrectbinaryresponce(msg);
  return b == 'y' || b == 'Y';
}

int main() {
srand(time(0));
bool firsttime = true;  
  while(Main_getbinaryresponce("Generate Another Password? (y/n) : ", firsttime)) {
    firsttime = false;
    system("clear");
    passgen p1;
    p1.display();
  }
  passgen::copyright();
  system("bash -c 'read -n 1 -s -p \"\nPress Any Key To Exit The Program...\"'");
  return 0;
}

//rand() % (to - from + 1) + from;