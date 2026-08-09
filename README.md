🔒 **Secure Password Generator v1.0**

A simple and secure command-line password generator built in C++. This tool allows users to create strong, customizable passwords by defining their length and specifying the types of characters to include, enhancing digital security.

🚀 **Key Features**

  * **Customizable Password Length**: Define the exact length of your password, from short to complex.
  * **Selectable Character Types**: Choose to include uppercase letters, lowercase letters, numbers, and special characters to meet specific security requirements.
  * **Multiple Generations**: Generate multiple passwords sequentially without restarting the application.
  * **User-Friendly Interface**: Simple prompts guide you through the password creation process.
  * **Randomness**: Utilizes `srand(time(0))` for seeding the random number generator, ensuring varied outputs.

## Start Using The System

Simply compile and run the application. The system will guide you through the password generation process.

### Example Interaction

```
 //--------------------------------------\\
 |           Password Generator           |
 |               Pass No. 1               |
 \\--------------------------------------//
    Entre Password Length: 10
Include Uppercase Letters? (y/n): y
Include Lowercase Letters? (y/n): y
Include Numbers? (y/n): y
Include Special Charachters? (y/n): y

Doen, Your Password Has Been Generated And Stored :)
press any key to Show Your Password...

Your Password Is: .]<L|76>{[

Generate Another Password? (y/n) : n

        Feel Secure, Have Fun Using My App :)
Copy Rights Reserved for Joe Ali "Software Dev and Open Source Programmer."

Press Any Key To Exit The Program
```
  * `password_generator.cpp`: Contains the `main` function and manages the overall program flow, allowing for multiple password generations.
  * `headers/password.h`: Defines the `passgen` class, which encapsulates the core logic for password generation, including user input for length and character types, and the generation algorithm itself.

## 🔧 Installation & Setup

### Prerequisites

You will need a C++ compiler (like G++).

  * **G++ (GCC)**:
      * **Linux**: Often pre-installed or installable via your distribution's package manager (e.g., `sudo apt-get install build-essential gcc g++ gdb`).
      * **macOS**: Install Xcode Command Line Tools (`xcode-select --install`).
      * **Windows**: Install MinGW-w64 or Cygwin.

### Compilation

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/JoeDev000/Password_Generator.git
    cd Password_Generator
    ```

2.  **Compile the source code:**

    ```bash
    g++ src/password_generator.cpp -o exe/password_generator
    ```

### Running the Application

```bash
./password_generator
```
or click the excecutable "password_generator.exe" in the exe folder

## 🔐 Security Considerations

  * **Customization for Strength**: Users can select all character types (uppercase, lowercase, numbers, special characters) to create highly complex passwords.
  * **Random Generation**: Passwords are generated using a seeded random number generator.

### Security Limitations

  * **Local Execution**: The generated passwords are displayed in the console, meaning they are stored in memory briefly and not persisted.
  * **No Cryptographic Randomness**: The `rand()` function is suitable for this application's purpose but is not cryptographically secure for high-stakes scenarios.

## 📈 Version History

### v1.0 (Current)

  * Initial release with core password generation functionality.
  * Support for customizable length and character types.
  * Option to generate multiple passwords.

## Author

Yousef Ali
Junior Backend Developer Using ASP.NET Core
GitHub: @dev-joee
LinkedIn: @dev-joe

Copyright (c) 2025 Yousef Ali

⭐ Star this repository if you find it useful\!
