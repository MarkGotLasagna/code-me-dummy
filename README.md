# Coding for dummies :nerd_face:

<div align=center>
    <image src=https://img.shields.io/github/languages/code-size/MarkGotLasagna/code-me-dummy?color=white></image>
    <image src=https://img.shields.io/tokei/lines/github.com/MarkGotLasagna/code-me-dummy?color=white></image>
    <br>
    <!-- from staging site, not working from production yet -->
    <image src=https://shields-staging.herokuapp.com/github/directory-file-count/MarkGotLasagna/code-me-dummy/cpp/code?color=black&label=C%2B%2B&logo=C%2B%2B&logoColor=white></image>
    <image src=https://shields-staging.herokuapp.com/github/directory-file-count/MarkGotLasagna/code-me-dummy/python/code?color=black&label=Python&logo=Python></image> 
</div>

<div align=center>
    <br>
    A repository suited for people getting into programming.
    <br><br>
</div>

The folder structure is as follows:
```
.
├── language1
│   ├── code
│   └── text
├── language2
│   ├── code
│   └── text
└── ...
```
`/code` folder contains all the source code, solutions to the problems are proposed inside this folder at the bottom of each program.

`/text` contains the problems and some hints if you're struggling to find a solution. Also note that a problem could have more solutions, so more implementations.

---

## Instructions: basics 📖
You'll need compilers. I'll assume that you already know what a compiler is. If you don't, then read a book or some-- nah joking. Check this [Wikipedia article](https://en.wikipedia.org/wiki/Compiler). The compiler executable will then [need indexing](https://code.visualstudio.com/docs/languages/cpp#_check-if-you-have-a-compiler-installed) in either your `%PATH` (Windows) or your `$PATH` (macOS).

Install an [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment), I highly recommend using [Visual Studio Code](https://code.visualstudio.com/). I've tried others but I like it the most for its customizable factors and easiness of use. It is also the most popular IDE around and used by millions.
After that, go to the extensions tab and search for "`language`". Install it to have full support for code completion and debugging.

*note: you can use [WSL](https://en.wikipedia.org/wiki/Windows_Subsystem_for_Linux) on your Windows machine if you feel powerful.*

### basics: c++
- If you're using **Linux** (like real men do) you should have the GNU compiler collection ([GCC](https://en.wikipedia.org/wiki/GNU_Compiler_Collection)) already installed. It will do the trick for both C++ and C (a subset of C++). Check with 

    `gcc -v`.
- For you **macOS** users, install [Clang](https://en.wikipedia.org/wiki/Clang). Check with 

    `clang --version`

- For the **Windows** users, install [Clang](https://en.wikipedia.org/wiki/Clang).

    `clang -v`

Learn about C++ with the following courses:
 - https://www.learncpp.com/
 - https://www.w3schools.com/CPP/default.asp

### basics: python
 - On **Linux** a python compiler should be preinstalled, if not, use your package manager to install it
 
     `python -v`

 - On **macOS** follow the instructions on the [official site](https://www.python.org/downloads/)

    `python --version`

 - For **Windows** do the same as the above

Learn about python with the following courses: 
 - https://www.learnpython.org/
 - https://www.w3schools.com/python/


---

## Instructions: how to 📖
### how to: c++
To compile the source code (aka the `.cpp` files), run:
- `clang++ -Wall filename.cpp -o filename`

or

- `g++ -Wall filename.cpp -o filename`
### how to: python
Compiling python scripts is as simple as typing:
 - `python filename.py`
    
    *note: to use a specific version of python (which might be needed if some scripts fail to compile), append the version like `python3 filename.py`*

*note: some programs might have an 'alternative' solution to the problem, they are denoted with the keyword `_alt`*