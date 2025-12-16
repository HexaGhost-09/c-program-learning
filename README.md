# 🚀 C Programming Learning - Beginner's Guide

[![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Stars](https://img.shields.io/github/stars/HexaGhost-09/c-program-learning?style=for-the-badge)](https://github.com/HexaGhost-09/c-program-learning/stargazers)

> A comprehensive collection of C programming examples, exercises, and resources designed for beginners to master the fundamentals of one of the most influential programming languages.

---

## 📖 About This Repository

C is a powerful, foundational programming language that has influenced countless modern languages. This repository serves as your learning companion, providing practical examples and exercises to help you understand C from the ground up.

### Why Learn C?

- **Foundation of Modern Computing** - Understanding C gives you insight into how computers actually work
- **Performance** - C provides direct hardware access and exceptional speed
- **Widely Used** - Powers operating systems, embedded systems, and critical infrastructure
- **Career Opportunities** - Essential for systems programming, IoT, and embedded development

---

## 📂 Repository Structure

```
c-program-learning/
│
├── main.c              # Main program file with examples
├── main.exe            # Compiled executable
├── subcodes/           # Additional code examples and exercises
└── README.md           # This file
```

---

## 🚀 Getting Started

### Prerequisites

Before you begin, ensure you have a C compiler installed:

**Windows:**
- [MinGW-w64](https://www.mingw-w64.org/) (GCC for Windows)
- [Visual Studio](https://visualstudio.microsoft.com/) with C/C++ tools

**macOS:**
```bash
xcode-select --install
```

**Linux:**
```bash
# Debian/Ubuntu
sudo apt-get update
sudo apt-get install build-essential

# Fedora
sudo dnf install gcc

# Arch
sudo pacman -S gcc
```

### Clone the Repository

```bash
# Using HTTPS
git clone https://github.com/HexaGhost-09/c-program-learning.git

# Using SSH
git clone git@github.com:HexaGhost-09/c-program-learning.git

# Navigate to the directory
cd c-program-learning
```

### Compile and Run

```bash
# Compile a C file
gcc main.c -o main

# Run the executable
./main        # On Linux/macOS
main.exe      # On Windows
```

---

## 💡 What You'll Learn

This repository covers essential C programming concepts:

- ✅ Basic Syntax and Structure
- ✅ Variables and Data Types
- ✅ Operators and Expressions
- ✅ Control Flow (if/else, loops)
- ✅ Functions and Recursion
- ✅ Arrays and Strings
- ✅ Pointers and Memory Management
- ✅ Structures and Unions
- ✅ File I/O Operations
- ✅ Preprocessor Directives

---

## 🎯 Learning Path

### 1. Start with the Basics
Begin with `main.c` to understand program structure and basic syntax.

### 2. Explore Examples
Browse through the `subcodes/` directory for specific topic examples.

### 3. Practice
Try modifying the code, experiment with different approaches, and build your own programs.

### 4. Debug
Learn to read compiler errors and use debugging tools like `gdb`.

---

## 🛠️ Useful Commands

### Compilation Options

```bash
# Basic compilation
gcc filename.c -o output

# Enable all warnings
gcc -Wall filename.c -o output

# Debug mode
gcc -g filename.c -o output

# Optimization
gcc -O2 filename.c -o output
```

### Debugging

```bash
# Using GDB
gdb ./program

# Common GDB commands
(gdb) run           # Run the program
(gdb) break main    # Set breakpoint
(gdb) next          # Next line
(gdb) print var     # Print variable
(gdb) quit          # Exit GDB
```

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a new branch (`git checkout -b feature/amazing-feature`)
3. **Commit** your changes (`git commit -m 'Add some amazing feature'`)
4. **Push** to the branch (`git push origin feature/amazing-feature`)
5. **Open** a Pull Request

### Contribution Ideas

- Add new examples for specific topics
- Improve existing code with better practices
- Add documentation and comments
- Fix bugs or typos
- Create exercises with solutions

---

## 📚 Additional Resources

### Official Documentation
- [C Reference - cppreference.com](https://en.cppreference.com/w/c)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

### Books
- **"The C Programming Language"** by Brian W. Kernighan and Dennis M. Ritchie
- **"C Programming: A Modern Approach"** by K. N. King
- **"Head First C"** by David Griffiths

### Online Tutorials
- [Learn-C.org](https://www.learn-c.org/)
- [CS50's Introduction to Computer Science](https://cs50.harvard.edu/x/)
- [Programiz C Programming](https://www.programiz.com/c-programming)

### Practice Platforms
- [HackerRank - C](https://www.hackerrank.com/domains/c)
- [LeetCode](https://leetcode.com/)
- [Exercism - C Track](https://exercism.org/tracks/c)

---

## ⚠️ Common Pitfalls

When learning C, watch out for:

- **Uninitialized Variables** - Always initialize variables before use
- **Buffer Overflows** - Be careful with array bounds
- **Memory Leaks** - Free allocated memory with `free()`
- **Pointer Errors** - Null pointer dereferences and dangling pointers
- **Integer Overflow** - Be aware of data type limits

---

## 💬 Get Help

- **Issues**: Open an [issue](https://github.com/HexaGhost-09/c-program-learning/issues) for bugs or questions
- **Discussions**: Start a discussion for general questions or ideas
- **Stack Overflow**: Use the `[c]` tag for community help

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 🌟 Acknowledgments

- Thanks to all contributors who help improve this resource
- Inspired by the C programming community
- Special thanks to Dennis Ritchie for creating C

---

## 📬 Contact

**HexaGhost-09** - [@HexaGhost-09](https://github.com/HexaGhost-09)

Project Link: [https://github.com/HexaGhost-09/c-program-learning](https://github.com/HexaGhost-09/c-program-learning)

---

<div align="center">

### ⭐ If you find this helpful, please consider giving it a star!

**Happy Coding! 🚀**

</div>
