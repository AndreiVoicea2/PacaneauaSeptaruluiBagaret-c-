<!-- ABOUT THE PROJECT -->
## About The Project
It is a small project started from a simple curiosity to see the working mechanism of a gambling machine. A mechanism that seems very easy to implement initially, but which is complicated by mathematical logic, using both notions of matrices and elements from the theory of probabilities. All this demanding an efficient implementation both in terms of memory and execution time of the respective program. It is a challenge for a mathematician, computer scientist and probably passionate about gambling.

### Built With

Project made in c++ console application using Visual Studio 2019 (initially created in Code Blocks)

<!-- USAGE EXAMPLES -->
## Usage

The program starts with a simple animation followed by an input that represents the maximum amount of money the player has. The next message asks the player if he wants to be shown a section of helpful information to understand how the respective mechanism works. After choosing the price with which it rotates and the game begins. After each win, a menu appears in which you can multiply it through a mini card guessing game. Good luck!

## Rules

Payouts are awarded from left to right and the number of similar symbols on each of the 4 paylines is calculated.
Payment line 1: A B C D E
Payment line 2: F G H I J
Payment line 3: K L M N O
Payment line 4: A G M I E


 _________
|         |
|A B C D E|
|F G H I J|  0
|K L M N O|  |
|_________|__|
| -     - |
|---------|
|_________| 
    


Symbols and indices:                      Chances:
1_cherry                                  1,2,3,4,5,6 have the 50% chance to show, but 7 has a 10% chance 
2_plum
3_orange                                  symbol value:
4_lemon                                   cherry - 5 usd
5_grape                                   plum,orange,lemon - 20 usd
6_melon                                   grape,melon - 100 usd
7_seven                                   seven - 500 usd
