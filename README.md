This workspace contains multiple C++ exercises and example files.

VS Code C/C++ configuration files were added under `.vscode/` to enable the "C/C++: Edit Configurations (UI)" feature.

Files added:
- `.vscode/c_cpp_properties.json` — IntelliSense configuration.
- `.vscode/tasks.json` — build task (compiles the active file with g++).
- `.vscode/launch.json` — debug configuration (uses gdb).

How to use
1. Open a .cpp file (for example, `Arrays and Hasing/two_sum.cpp`).
2. Run the build task: Terminal → Run Build Task... (or press Ctrl+Shift+B).
3. Start debugging: Run → Start Debugging (F5). The active file will be built and run.

Notes
- These configs assume `g++` and `gdb` are available on PATH (e.g., via MinGW or MSYS2).
- If you use MSVC, update `compilerPath`, `MIMode`, and `miDebuggerPath` accordingly.
