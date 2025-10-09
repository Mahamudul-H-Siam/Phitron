# Copilot Instructions for AI Agents

## Project Overview

- This is a minimal C project, currently containing only `test.c`.
- There is no build system or external dependencies; compilation is done manually.

## Build & Run Workflow

- Compile using GCC:
  ```bash
  gcc test.c -o test.exe
  ```
- Run the executable:
  ```bash
  ./test.exe
  ```
- If you encounter build errors, check for missing headers, syntax issues, or platform-specific code.

## Coding Conventions

- Use standard C (C99 or later) unless otherwise specified in comments.
- Keep code in a single file unless the project expands.
- Use clear function and variable names; add comments for non-obvious logic.
- Prefer `printf` for output and `scanf` for input.

## Debugging

- If the program crashes or produces unexpected output, add print statements to trace variable values.
- For segmentation faults, check pointer usage and array bounds.

## Extending the Project

- If adding new features, create additional `.c` and `.h` files as needed, and update build instructions.
- Document any new build steps or dependencies in this file.

## Example Patterns

- Main function structure:
  ```c
  int main() {
      // ...existing code...
      return 0;
  }
  ```
- Input/output:
  ```c
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  ```

## Key File

- `test.c`: All logic currently resides here.
