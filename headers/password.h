#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class passgen {
  private:
    char* _password;
    short _length;
    bool _uppercase, _lowercase, _number, _symbol;
  public:
    static short counter;
    passgen();
    ~passgen();
    void processflow();
    void welcome();
    void getlength();
    void choose();
    void generatepassword();
    void display();  
    static void copyright();
};
short passgen::counter = 0;
passgen::passgen() {
  processflow();
}
passgen::~passgen() {
  delete [] _password;
}
void passgen::processflow() {
  //start the app
  welcome();
  //get length and allocate the password variable
  getlength();
  _password = new char[_length + 1];
  //choose the style of the password
  choose();
  //generate password
  generatepassword();
}
void passgen::welcome() {
  system("cls");
  cout << " //--------------------------------------\\\\" << endl;
  cout << " |           Password Generator           |" << endl;
  printf( " |               Pass No. %i               |\n", ++counter);
  cout << " \\\\--------------------------------------//" << endl;
}
bool checklength(short l) {
  return l > 0;
}
short getcorrectlength() {
short l;
  cout << "\tEntre Password Length: ";
  cin >> l;
  while (!checklength(l)) {
    cout << "\tInvalid length, plz try again :(\n\n";
    cout << "\tEntre Password Length: ";
    cin >> l;
  }
  return l;
}
void passgen::getlength() {
  _length = getcorrectlength();
}
bool checkbinaryresponce(char b) {
  return b == 'y' || b == 'Y' || b == 'n' || b == 'N';
}
char getcorrectbinaryresponce(string msg) {
char b;
  cout << msg;
  cin >> b;
  while (!checkbinaryresponce(b)) {
    cout << "Invalid length, plz try again :(\n\n";
    cout << msg;
    cin >> b;
  }
  return b;
}
bool getbinaryresponce(string msg) {
char b = getcorrectbinaryresponce(msg);
  return b == 'y' || b == 'Y';
}
void passgen::choose() {
  _uppercase = getbinaryresponce("Include Uppercase Letters? (y/n): ");
  _lowercase = getbinaryresponce("Include Lowercase Letters? (y/n): ");
  _number = getbinaryresponce("Include Numbers? (y/n): ");
  _symbol = getbinaryresponce("Include Special Charachters? (y/n): ");
}
//rand() % (to - from + 1) + from;
char randomupper() {
  return rand() % (90 - 65 + 1) + 65;
}
char randomlower() {
  return rand() % (122 - 97 + 1) + 97;
}
char randomnumber() {
  return rand() % (57 - 48 + 1) + 48;
}
char randomsymbol() {
unsigned short temp;
char symbol;
  do {
    temp = rand() % 5;
    if(temp == 1) 
      symbol = rand() % (47 - 33 + 1) + 33;
    else if (temp == 2)
      symbol = rand() % (64 - 58 + 1) + 58;
    else if (temp == 3)
      symbol = rand() % (96 - 91 + 1) + 91;
    else
      symbol = rand() % (126 - 123 + 1) + 123;
  } while(symbol == '\\' || symbol == '`');
  return symbol;
}
void passgen::generatepassword() {
unsigned short temp;
  //ALL
  if (_uppercase && _lowercase && _number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 5;
      if (temp == 1) _password[i] = randomupper();
      else if (temp == 2) _password[i] = randomlower();
      else if (temp == 3) _password[i] = randomnumber();
      else _password[i] = randomsymbol();
    }
  }
  //Three
  else if (_uppercase && _lowercase && _number && !_symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 4;
      if (temp == 1) _password[i] = randomupper();
      else if (temp == 2) _password[i] = randomlower();
      else _password[i] = randomnumber();
    }
  }
  else if (_uppercase && _lowercase && !_number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 4;
      if (temp == 1) _password[i] = randomupper();
      else if (temp == 2) _password[i] = randomlower();
      else _password[i] = randomsymbol();
    }
  }
  else if (_uppercase && !_lowercase && _number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 4;
      if (temp == 1) _password[i] = randomupper();
      else if (temp == 2) _password[i] = randomnumber();
      else _password[i] = randomsymbol();
    }
  }
  else if (!_uppercase && _lowercase && _number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 4;
      if (temp == 1) _password[i] = randomlower();
      else if (temp == 2) _password[i] = randomnumber();
      else _password[i] = randomsymbol();
    }
  }
  //Two
  else if (_uppercase && _lowercase && !_number && !_symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 3;
      if (temp == 1) _password[i] = randomupper();
      else _password[i] = randomlower();
    }
  }
  else if (_uppercase && !_lowercase && _number && !_symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 3;
      if (temp == 1) _password[i] = randomupper();
      else _password[i] = randomnumber();
    }
  }
  else if (!_uppercase && _lowercase && _number && !_symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 3;
      if (temp == 1) _password[i] = randomlower();
      else _password[i] = randomnumber();
    }
  }
  else if (_uppercase && !_lowercase && !_number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 3;
      if (temp == 1) _password[i] = randomupper();
      else _password[i] = randomsymbol();
    }
  }
  else if (!_uppercase && _lowercase && !_number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 3;
      if (temp == 1) _password[i] = randomlower();
      else _password[i] = randomsymbol();
    }
  }
  else if (!_uppercase && !_lowercase && _number && _symbol) {
    for (int i = 0; i < _length; i++) {
    temp = rand() % 3;
      if (temp == 1) _password[i] = randomnumber();
      else _password[i] = randomsymbol();
    }
  }
  //One
  else if (!_uppercase && !_lowercase && !_number && _symbol) {
    for (int i = 0; i < _length; i++) {
      _password[i] = randomsymbol();
    }
  }
  else if (!_uppercase && !_lowercase && _number && !_symbol) {
    for (int i = 0; i < _length; i++) {
      _password[i] = randomnumber();
    }
  }
  else if (!_uppercase && _lowercase && !_number && !_symbol) {
    for (int i = 0; i < _length; i++) {
      _password[i] = randomlower();
    }
  }
  else if (_uppercase && !_lowercase && !_number && !_symbol) {
    for (int i = 0; i < _length; i++) {
      _password[i] = randomupper();
    }
  }
  //None
  else {
    cout << "Invalid Password Style, No Passeord Generated\n\n";
    _password = NULL;
    return;
  }
  _password[_length] = '\0';
  cout << "\nDoen, Your Password Has Been Generated And Stored :)\n";
}
void passgen::display() {
  cout << endl;
  if (_password == NULL) return;
  cout << "Your Password Is: " << _password << "\n\n";
}
void passgen::copyright() {
  cout << "\n\t\tFeel Secure, Have Fun Using My App :)\n";
  cout << "Copy Rights Reserved for Joe Ali \"Software Dev and Open Source Programmer.\"\n";
}