# Insertion Operator

`<<` is the **insertion operator**. It takes the value on its right and inserts it into the stream on its left. That stream is usually `std::cout`, but it can be other streams too (like a file stream later)

Your program wants to print `"Hello"` to the terminal.

The **slow** way: the program grabs the terminal, character by character, and pushes each one out. `H`... wait... `e`... wait... `l`... wait. Every single character is a separate trip to the terminal. That's expensive.

The **fast** way: your program keeps a small **in-memory box** (the "buffer"). It drops characters into the box: `H`, `e`, `l`, `l`, `o`. When the box is full — or when the program ends — it dumps the whole box to the terminal in one trip.

That box is the buffer. `cout` uses one.

# Preprocessor Directive 

`#include` is a preprocessor directive. `<iostream>` is the file it pulls in.

`<iostream>` contains **declarations** of `std::cout`, `std::cin`, `std::cerr`, and the `<<` / `>>` operators for streams. It declares _that these things exist_ so the compiler knows their names and types.

`<iostream>` tells the compiler: "these stream objects and operators exist, here's how to use them." The linker supplies the actual code.

# Vectors

vector goes beyond the range of items in the list and when it goes you get whatever you have in the memory

# Types
| Thing    | Header you include | Full name     |
| -------- | ------------------ | ------------- |
| `string` | `<string>`         | `std::string` |
| `vector` | `<vector>`         | `std::vector` |
| `cout`   | `<iostream>`       | `std::cout`   |
| `sort`   | `<algorithm>`      | `std::sort`   |
| `map`    | `<map>`            | `std::map`    |
| `sqrt`   | `<cmath>`          | `std::sqrt`   |
| `array`  | `<array>`          | `std::array`  |

# Classes & Constructors

Wherever i am not changing the class variables in the function i should mark them as const this is called **const correctness**

Here's everything you've actually worked through, in the order you learned it. This is your notes, not mine — I'm just organizing what you already demonstrated you understand.

---

## Classes and Objects

### The basic shape

A class is a **blueprint**. An object is a **concrete instance** built from it.

```cpp
class Student
{
    // members (data) and methods (functions) go here
};

Student s1;   // s1 is an object, a concrete instance of Student
```

Note: the class definition ends with a **semicolon** after the closing brace `};`.

---

### Access specifiers

- `private:` — only the class's own methods can touch these
- `public:` — anyone with an object can call these

Default for `class` is `private`. That's why you write `public:` explicitly before the constructor and getters.

---

### Members

Data stored in each object. In your `Student`:

```cpp
std::string m_first = "First";
std::string m_last  = "Last";
int         m_id    = 0;
float       m_avg   = 0;
```

The `m_` prefix is a naming convention — "m" for member. Not required by the language, but it makes it obvious that `m_first` is a member and `first` is a parameter.

The `= "First"`, `= 0` parts are **default member initializers**. They set the value a member gets if a constructor doesn't set it.

---

### Constructors

A constructor is a method that runs when an object is created. Two rules:

1. **Name is exactly the class name** (`Student`)
2. **No return type** — not even `void`

You have two:

```cpp
Student() {};
```

The **default constructor** — takes no arguments. Needed if you ever write `Student s1;`.

```cpp
Student(std::string first, std::string last, int id, float avg)
    : m_first(first)
    , m_last(last)
    , m_id(id)
    , m_avg(avg)
{};
```

The **parameterized constructor** — takes arguments to set values.

---

### The member initializer list

The part after the colon:

```cpp
: m_first(first)
, m_last(last)
, m_id(id)
, m_avg(avg)
```

- `m_first(first)` means "initialize member `m_first` with the parameter `first`"
- Entries separated by commas
- Preferred over assigning inside the body
- **Must be in the same order as the members are declared in the class** — the compiler initializes them in declaration order regardless

---

### The critical rule you discovered

> **If you declare ANY constructor, the compiler will NOT generate a default constructor. Ever.**

Default member initializers (`= "First"`, `= 0`) do **not** bring it back. They only control what values members get *once a constructor runs*. They don't create a constructor.

That's why your code needed `Student() {};` — because:

1. You wrote the parameterized constructor, which **suppressed** the auto-generated default constructor
2. Your `main` does `Student s1;`, which needs a zero-argument constructor
3. So you had to write `Student() {};` yourself

If you removed `Student s1;` from `main`, you could also remove `Student() {};` and it would compile.

**How to verify:** comment out `Student() {};`, comment out `Student s1;`, compile. It builds. That proves the connection.

---

### Getters

Methods to read private members from outside the class:

```cpp
std::string getFirst() { return m_first; }
std::string getLast()  { return m_last; }
int         getID()    { return m_id; }
float       getAvg()   { return m_avg; }
```

Used as `s2.getFirst()` — the parentheses mean "call this function."

---

### Things that did NOT work (and why)

**`std::cout << s1`** — fails. `cout` only knows how to print built-in types. It doesn't know what a `Student` is. You must either:

- Print members individually: `std::cout << s2.getFirst()`
- Add a `print()` method
- Write `operator<<` for `Student` (later, more advanced)

**`std::cout << s1()`** — fails. Parentheses mean "call as a function." `s1` is an object, not a function. Can't call it.

**`Student s1();`** — the "most vexing parse." This declares a **function** named `s1` returning `Student`, not an object. Use `Student s1;` or `Student s1{};` instead.

**Missing `std::` on `endl`** — `endl` lives in the `std` namespace. Must write `std::endl`.

---

### Syntax details

- Class definition ends with `};` — semicolon required
- Method definitions inside the class **do not** need a semicolon after `}` (though it's harmless)
- `Student() {};` and `Student() {}` behave the same — the trailing `;` is unnecessary but not an error
- `Student s1;` — creates an object, calls the default constructor
- `Student s1{};` — same, using brace initialization (unambiguous, avoids most vexing parse)

---

### The one-line summary

> A class bundles data and the methods that operate on it. Constructors initialize the object. Any constructor you write suppresses the compiler's default one, so if you need both a default and a parameterized constructor, you must write both yourself.


# Namespaces
`::` = scope resolution operator if we have 2 variables named `x` we can put them each into their own namespaces like this `namespace first = {int x = 0}` & `namespace second = {int x = 1}` then we can print each `x` like this `std::cout << first::x` = 0.

Same goes for the other one too we can print it like this `std::cout << second::x` = 1.


# Type identifier
Imagine we have really long data type as shown below
`std::vector<std::pair<std::string, int>>`

to write the above data type is really hard for this scenario or similar we can use `typedef`
then it would be like as shown below
`std::vector<std::pair<std::string, int>> pairlist_t` 
the reason we have `pairlist_t` because `t` stands for typedef identifier so the reader will know right  away.

`using` keyword works the similar way both are used to create new identifier for existing data type below is shown how using would work
`using name_t = std::string;` we can use this as shown here `name_t firstName = "Shaheer"`


# Type Conversion

There are two kind of type conversion #Implicit and #explicit.
#Implicit is done automatically while #explicit is done manually.


# Character Input & Output

#cout (Character output) = Insertion operator (<<) & #cin (Character input) = extraction operator (>>).

The way it works as follows first we declare the variables in this case let's just go with name

below is the variable declaration
`std::string name;`

then we ask user what to do in this case we ask use to input their name
`std::cout << "Please enter your name:";`

then below we get the input from user by using `cin`
`std::cin >> name;` this code takes that input and put it into the name variable

If we need to get the full name for that we will have to use another function called `std::getline()` and it takes 2 arguments first argument is `std::cin` next argument is the declared variable `name`.

`Tomorrow continue from 1:12:00`
# Questions: