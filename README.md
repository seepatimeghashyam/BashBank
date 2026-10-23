\# BashBank



A C++ command-line banking simulator that lets users create accounts, authenticate using a PIN, check account details, deposit money, and withdraw funds.



\## Features



\- \*\*Account Creation\*\* — Register an account with a name, date of birth, and six-digit PIN.

\- \*\*PIN Authentication\*\* — Log in using an account number and PIN.

\- \*\*Account Details\*\* — View account information and current balance.

\- \*\*Deposits and Withdrawals\*\* — Perform basic banking transactions.

\- \*\*File-Based Persistence\*\* — Store account information locally in text files.



\## Tech Stack



\- \*\*Language:\*\* C++

\- \*\*Libraries:\*\* iostream, fstream, string, cctype

\- \*\*Concepts:\*\* Classes and objects, encapsulation, file handling, functions, conditional statements, and loops.

\- \*\*Tools:\*\* Git and GitHub



\## Getting Started



\### Prerequisites



\- A C++ compiler such as GCC (MinGW-w64 on Windows).

\- Git (optional, for cloning the repository).



\### Compile



Open a terminal in the project directory and run:



```bash

g++ BashBank.cpp -o BashBank

```



\### Run on Windows



```bash

.\\BashBank.exe

```



\### Run on Linux



```bash

./BashBank

```



\## Current Limitations



BashBank is a learning project, not a real banking application. It currently uses local text files for account storage and does not implement production-grade security or data protection.



\## Planned Improvements



\- Improve input validation and error handling.

\- Strengthen PIN handling and account data security.

\- Fix transaction edge cases.

\- Refactor the code and improve maintainability.

\- Add testing and improve account management.



\## Purpose



This project is an opportunity to strengthen my C++ fundamentals by understanding and improving a command-line application, particularly classes, file handling, input validation, and version control.



