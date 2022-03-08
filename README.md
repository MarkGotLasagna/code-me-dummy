# C++ for the dummies

A repository suited for people getting into C++ that have CS background, that want to get into programming, that would like to learn a language but are masochist, or for people that don't want to feel like a bag of rotting potatoes.

`/code` folder contains all the source code, solutions to the problems proposed inside `/text`.
Some hints are provided if you're struggling.

## Instructions: basics
You'll need a compiler. I'll assume that you already know what a compiler is. If you don't, then read a book or some-- nah joking. Check this [Wikipedia article](https://en.wikipedia.org/wiki/Compiler). The compiler executable will then [need indexing](https://code.visualstudio.com/docs/languages/cpp#_check-if-you-have-a-compiler-installed) in either your `%PATH` (Windows) or your `$PATH` (macOS).

- If you're using **Linux** (like real men do) you should have the GNU compiler collection ([GCC](https://en.wikipedia.org/wiki/GNU_Compiler_Collection)) already installed. It will do the trick for both C++ and C (a subset of C++). Check with 

    `gcc -v`.
- For you **macOS** users, install [Clang](https://en.wikipedia.org/wiki/Clang). Check with 

    `clang --version`.

- For the **Windows** users, install [Clang](https://en.wikipedia.org/wiki/Clang).

    `clang -v`

*note: you can use [WSL](https://en.wikipedia.org/wiki/Windows_Subsystem_for_Linux) on your Windows machine if you feel powerful.*

Install an [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment), I highly recommend using [Visual Studio Code](https://code.visualstudio.com/). I've tried others but I like it the most for its customizable factors and easiness of use. It is also the most popular IDE around and used by millions.
After that, go to the extensions tab and search for "C/C++" by Microsoft. Install it to have full support for code completion and debugging.

## Instructions: how to
To compile the source code (aka the `.cpp` files), run:
- `clang++ -Wall filename.cpp -o filename`

or

- `g++ -Wall filename.cpp -o filename`