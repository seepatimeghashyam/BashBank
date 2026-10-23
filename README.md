# BashBank

**A C++ command-line banking simulator built to practise object-oriented programming, file handling, and core programming fundamentals.**

BashBank lets users create accounts, authenticate with a PIN, view account details, and perform basic deposit and withdrawal operations through a terminal interface.

> **Project status:** Learning project — under development.

## Features

- **Account management** — Create an account with a name, date of birth, and six-digit PIN.
- **PIN authentication** — Log in using an account number and PIN.
- **Balance inquiry** — View account details and the current balance.
- **Transactions** — Deposit and withdraw funds.
- **Local persistence** — Store account records in text files between program runs.

## Built With

![C++](https://img.shields.io/badge/C%2B%2B-Programming%20Language-blue)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey)
![Status](https://img.shields.io/badge/Status-Learning%20Project-orange)

- **Language:** C++
- **Standard libraries:** `iostream`, `fstream`, `string`, `cctype`
- **Concepts:** Classes, encapsulation, functions, loops, conditionals, file I/O
- **Version control:** Git and GitHub

## Getting Started

### Requirements

- A C++ compiler, such as GCC through MinGW-w64
- A terminal such as Git Bash or Windows Terminal

### 1. Clone the repository

```bash
git clone https://github.com/seepatimeghashyam/BashBank.git
cd BashBank
```

### 2. Compile

```bash
g++ BashBank.cpp -o BashBank
```

### 3. Run

**Windows — Git Bash**

```bash
./BashBank.exe
```

**Linux**

```bash
./BashBank
```

## How It Works

1. Choose whether to create an account, log in, or exit.
2. New accounts receive an account number and save their details locally.
3. Existing users enter their account number and PIN.
4. After authentication, users can view their details, deposit money, or withdraw money.
5. Account information is written to local text files.

## Current Limitations

BashBank is a learning project, **not a real banking application**.

- Account data and PINs are stored in plain text.
- Input validation and transaction edge cases need improvement.
- The application does not use a database or production-grade security.
- Automated tests have not yet been added.

**Do not use real personal or financial information with this program.**

## Roadmap

- [ ] Improve input validation and error handling
- [ ] Prevent invalid or negative transaction amounts
- [ ] Fix withdrawal boundary cases
- [ ] Improve account data security
- [ ] Refactor and document the code
- [ ] Add tests for account creation and transactions

## What I'm Learning

This project is helping me strengthen my understanding of C++, object-oriented programming, file handling, debugging, and version control. I'll document improvements as I implement and test them.