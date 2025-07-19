These cases are especially important for **signed integers**, **negative values**, and **platform-specific behaviors**.

---

## ✅ Final Detailed Notes with Exceptional Cases

---

### 🔹 **1. Bitwise Operators Overview**

| Operator | Symbol | Description          | Example                            |               |
| -------- | ------ | -------------------- | ---------------------------------- | ------------- |
| AND      | `&`    | 1 if both bits are 1 | `9 & 6 = 0`                        |               |
| OR       | \`     | \`                   | 1 if at least one bit is 1         | `9 \| 6 = 15` |
| XOR      | `^`    | 1 if bits differ     | `9 ^ 6 = 15`                       |               |
| NOT      | `~`    | Flips all bits       | `~9 = -10` (due to 2’s complement) |               |

#### 🔸 Binary:

```
9  = 00001001  
6  = 00000110  
~9 = 11110110 (→ -10 in 2's complement)  
~6 = 11111001 (→ -7 in 2's complement)
```

---

### 🔹 **2. Shift Operators Overview**

| Operator    | Symbol | Action                           | Example        |
| ----------- | ------ | -------------------------------- | -------------- |
| Left Shift  | `<<`   | Multiplies by 2ⁿ                 | `17 << 1 = 34` |
| Right Shift | `>>`   | Divides by 2ⁿ (integer division) | `17 >> 2 = 4`  |

---

### ⚠️ **3. Exceptional Cases & Gotchas**

---

#### ✅ **(a) Bitwise NOT on Positive Numbers Produces Negative Values**

```cpp
int a = 9;
cout << ~a << endl; // Output: -10
```

* Due to **2’s complement**, `~a = -(a+1)`
* Bitwise NOT flips **all 32 bits** (including sign bit).

---

#### ✅ **(b) Bitwise Operations on Negative Numbers**

```cpp
int x = -5;   // Binary: 111...1011 (2's complement)
int y = 2;    // Binary: 000...0010

cout << x & y; // Result depends on bit-level representation
```

* May produce **unexpected results** if you assume unsigned behavior.
* Example:

  ```
  -5 & 2 = 0
  -5 | 2 = -3
  -5 ^ 2 = -3
  ```

> ⚠ **Tip:** Prefer `unsigned int` for precise control over bits.

---

#### ✅ \*\*(c) Shift on Negative Numbers is ***Implementation-Defined***

```cpp
int x = -8;
cout << (x >> 1); // May result in -4 or garbage depending on compiler
```

* **Right shift of negative signed integers is implementation-defined** in C++.
* **On most compilers:** it performs **arithmetic shift** (fills with sign bit, i.e., -4).
* **But it may not be portable.**

✅ To avoid ambiguity:

```cpp
unsigned int u = static_cast<unsigned int>(-8);
cout << (u >> 1); // Always logical shift (fills with 0)
```

---

#### ✅ **(d) Shifting Beyond Bit Width is Undefined**

```cpp
int a = 5;
cout << (a << 32); // ❌ Undefined Behavior on 32-bit int
```

* Always ensure `0 <= shift < width` (e.g., 0–31 for 32-bit integers).
* Undefined behavior can cause **crashes or garbage results**.

---

#### ✅ **(e) Use Parentheses in Expressions**

```cpp
int a = 5, b = 3;
cout << a + b << 1 << endl; // Wrong: Parses as ((a + b) << 1)
```

* Always use parentheses with bitwise and arithmetic operations to avoid confusion:

  ```cpp
  cout << ((a + b) << 1); // Correct
  ```

---

### 🔹 **4. Practical Tips**

* ✅ Use `std::bitset` for **debugging bit-level output**:

  ```cpp
  cout << bitset<8>(9) << endl; // prints: 00001001
  ```

* ✅ Use `unsigned int` if you care about pure bit patterns.

* ✅ Avoid shifting negative numbers unless behavior is explicitly known.

* ✅ Be careful with operator precedence (`^`, `&`, `|` have lower precedence than `+`, `*`, etc.)

---

### ✅ Summary Table

| Concept                        | Safe? | Notes                       |
| ------------------------------ | ----- | --------------------------- |
| `~positive_integer`            | ✅     | Results in negative number  |
| Bitwise on `signed int`        | ⚠️    | Works, but harder to reason |
| Right shift on negative number | ❌     | Implementation-defined      |
| Shift >= width of type         | ❌     | Undefined behavior          |
| Use parentheses                | ✅     | Prevents precedence bugs    |

