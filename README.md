# My Own C Library 📚

A comprehensive custom C library providing a collection of essential functions for string manipulation, memory management, character checks, conversions, and output handling.  Built from scratch to understand low-level programming concepts and provide reusable utility functions.

## ✨ Features

- **String Manipulation**
  - String length calculation
  - String copying and concatenation
  - String comparison and searching
  - String duplication and splitting
  - Case conversion (uppercase/lowercase)
  - Trimming and substring extraction

- **Memory Management**
  - Memory allocation and deallocation
  - Memory copying and moving
  - Memory setting and comparison
  - Zero-initialization utilities

- **Character Checks**
  - Alphabetic character detection
  - Numeric character detection
  - Alphanumeric checks
  - Whitespace detection
  - ASCII character validation
  - Printable character checks

- **Conversions**
  - String to integer (atoi)
  - Integer to string (itoa)
  - Character case conversions
  - Type casting utilities

- **Output Handling**
  - Character output to stdout
  - String output to stdout
  - Formatted output functions
  - File descriptor output
  - Error output to stderr

## 🛠️ Tech Stack

- **Language**: C
- **Standard**:  C99/C11
- **Build System**: Makefile
- **Compiler**: GCC/Clang compatible

## 📋 Function Categories

### String Functions
```c
size_t ft_strlen(const char *s);
char *ft_strcpy(char *dest, const char *src);
char *ft_strcat(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strdup(const char *s);
char **ft_split(char const *s, char c);
```

### Memory Functions
```c
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
```

### Character Functions
```c
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
```

### Conversion Functions
```c
int ft_atoi(const char *str);
char *ft_itoa(int n);
```

### Output Functions
```c
void ft_putchar(char c);
void ft_putstr(const char *s);
void ft_putendl(const char *s);
void ft_putnbr(int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(const char *s, int fd);
```

## 🗂️ Project Structure

```
My-Own-C-Library/
├── src/                   # Source files
│   ├── string/           # String manipulation functions
│   ├── memory/           # Memory management functions
│   ├── character/        # Character check functions
│   ├── conversion/       # Conversion functions
│   └── output/           # Output handling functions
├── include/              # Header files
│   └── libft.h          # Main library header
├── Makefile             # Build configuration
├── tests/               # Unit tests
└── README.md            # Documentation
```

## 🚀 Getting Started

### Prerequisites
- GCC or Clang compiler
- Make build tool
- Unix-like operating system (Linux, macOS, WSL)

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/MjdAkel/My-Own-C-Library. git
   cd My-Own-C-Library
   ```

2. **Compile the library**
   ```bash
   make
   ```

3. **Clean build artifacts (optional)**
   ```bash
   make clean    # Remove object files
   make fclean   # Remove object files and library
   make re       # Rebuild from scratch
   ```

### Usage

1. **Include the header in your C file**
   ```c
   #include "libft.h"
   ```

2. **Compile your program with the library**
   ```bash
   gcc -o my_program my_program.c -L.  -lft -I./include
   ```

3. **Example program**
   ```c
   #include "libft.h"
   
   int main(void)
   {
       char *str = ft_strdup("Hello, World!");
       ft_putendl(str);
       
       int num = ft_atoi("42");
       ft_putnbr(num);
       ft_putchar('\n');
       
       free(str);
       return (0);
   }
   ```

## 📝 Usage Examples

### String Manipulation
```c
char *str = "Hello";
size_t len = ft_strlen(str);  // Returns 5

char *copy = ft_strdup(str);  // Duplicates string
ft_putendl(copy);             // Prints "Hello" with newline

char **words = ft_split("one,two,three", ',');  // Splits by comma
```

### Memory Management
```c
char *buffer = (char *)ft_memalloc(100);  // Allocates 100 bytes
ft_memset(buffer, 'A', 50);               // Sets first 50 bytes to 'A'
ft_memdel((void **)&buffer);              // Frees memory
```

### Character Checks
```c
if (ft_isalpha('A'))    // Returns 1 (true)
    ft_putstr("Letter\n");

if (ft_isdigit('5'))    // Returns 1 (true)
    ft_putstr("Digit\n");
```

### Conversions
```c
int num = ft_atoi("12345");     // Converts string to int
char *str = ft_itoa(-42);       // Converts int to string
ft_putendl(str);                // Prints "-42"
free(str);
```

## 🔒 Memory Safety

- All allocated memory should be freed by the caller
- Functions follow standard C library conventions
- Null pointer checks implemented where necessary
- Buffer overflow protection in string operations

## 🧪 Testing

Run the test suite: 
```bash
make test
```

Run with memory leak detection (requires valgrind):
```bash
make valgrind
```

## 📚 Documentation

Each function is documented with:
- Function prototype
- Parameter descriptions
- Return value specification
- Usage examples
- Edge case handling

## 🤝 Contributing

Contributions are welcome!  Please follow these steps:

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/NewFunction`)
3. Add tests for new functions
4. Commit your changes (`git commit -m 'Add ft_newfunction'`)
5. Push to the branch (`git push origin feature/NewFunction`)
6. Open a Pull Request

### Coding Standards
- Follow the Norm coding style (42 School standard)
- Maximum 25 lines per function
- Maximum 80 characters per line
- No global variables
- Proper error handling

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

## 👤 Author

**MjdAkel**
- GitHub: [@MjdAkel](https://github.com/MjdAkel)

## 🙏 Acknowledgments

- Inspired by the C Standard Library
- Built as part of systems programming learning
- Thanks to the open-source community

## 📖 Resources

- [C Standard Library Reference](https://en.cppreference.com/w/c)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Make Manual](https://www.gnu.org/software/make/manual/)

---

⭐ Star this repository if you find it helpful!   
🐛 Report bugs in the [Issues](https://github.com/MjdAkel/My-Own-C-Library/issues) section
