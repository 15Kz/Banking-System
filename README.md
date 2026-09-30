# Console ATM (C++)

A beginner console banking program written in C++ as a first-year BS IT
learning project. **Work in progress.**

## What it does
- PIN login with a limited number of attempts
- Main menu: Deposit, Withdraw, Balance Check, Transfer Money, Exit
- Deposit: moves money from a cash "wallet" into the account balance
- Withdraw: takes money out of the balance into the wallet
- Balance check: shows the account number and current balance
- Transfer: validates a 10-digit recipient account number and sends money

## Concepts practiced
Variables and data types, `for` loops, `if`/`else`, `switch`, `goto`,
string handling (length and per-character checks), and basic input
validation.

## Status and planned work
- [ ] Finish and polish every menu option
- [ ] Add transaction history / mini statement
- [ ] Add change PIN
- [ ] Save data to a file so it persists between runs
- [ ] Refactor into functions and a `BankAccount` class

## How to run
g++ main.cpp -o atm
./atm
