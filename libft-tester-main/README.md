# 🕹️ Libft Unit Tester

<img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" alt="42 School"><img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge" alt="Language C"><img src="https://img.shields.io/badge/Platform-Unix%20%2F%20macOS-lightgrey?style=for-the-badge" alt="Platform Unix macOS">

---

## 📝 DESCRIPTION

An automated, fast, and portable testing environment specifically designed to stress-test and validate the functions of the **Libft** project from 42 School. 

This tester features incremental compilation (it only recompiles what you modify), a classic clear `[OK]` / `[KO]` visual layout, and a surgical filtering system to run tests function by function.

---

## 🛠️ INSTALLATION & STRUCTURE

For the tester to work natively without configuring absolute paths, your workspace should be organized like this:

<pre>
📁 your_workspace/
├── 📄 libft.h
├── 📄 Makefile
├── 📄 ft_*.c
└── 📁 libft-tester/    # Contains this tester (main.c, Makefile, run_tests.sh, src/...)
</pre>

### Cloning the Tester

Enter the root of your `libft` project and clone the tester, ensuring the folder sits at the same level as your source files:

<pre><code>git clone https://github.com/mapena-z/libft-tester.git
cd libft-tester
</code></pre>

---


## 🚀 USAGE MODES

The tester is <b>100% portable</b>. It uses its own Makefile as a command bridge, so you do not need to modify your system variables or ~/.zshrc file.

<table>
  <tr>
    <th>Command</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><b>./run_tests.sh</b></td>
    <td>Runs the entire test suite.</td>
  </tr>
  <tr>
    <td><b>./run_tests.sh strlen</b></td>
    <td>Runs the test ONLY for ft_strlen.</td>
  </tr>
  <tr>
    <td><b>./run_tests.sh split</b></td>
    <td>Runs the test ONLY for ft_split.</td>
  </tr>
</table>

<br>

> 💡 *Note:* The filter is smart. It works whether you write the plain name (`split`) or include the prefix (`ft_split`).


---


## 🎨 SPECIAL FEATURES

* **⚙️ Smart Incremental Compilation:** The tester does not destroy your library with an `fclean` every time it runs. It calls your base `Makefile` transparently so that `make` recompiles **only the `.c` files you have actually edited**. Execution takes less than a second!

* **🛡️ Double Cleaning Shield:** Tests that interact with File Descriptors (`ft_putchar_fd`, `ft_putnbr_fd`, etc.) use temporary files that are self-destroyed in microseconds via code (`unlink`), reinforced with an `rm -f` sweep when closing the script. Your VS Code environment remains pristine.

* **📊 Classic Verdict:** Clean and unmistakable block format to identify bugs and failed subtests instantly.

<pre>
ft_strlen          : 1.OK 2.OK 3.OK 4.OK 5.OK 
ft_split           : 1.OK 2.OK 3.KO 4.OK 5.OK 6.OK 7.CRASH 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 
</pre>


---
