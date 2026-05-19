# Calc DLL (x86 / x64)

Simple Windows DLL that opens `calc.exe` when loaded.

## Build x64

```bash
x86_64-w64-mingw32-g++ -shared -o calc64.dll calc_dll.cpp
```

## Build x86

```bash
i686-w64-mingw32-g++ -shared -o calc32.dll calc_dll.cpp
```

## Output

```text
calc32.dll    -> x86
calc64.dll    -> x64
```

## Verify

```bash
file calc32.dll
file calc64.dll
```

Use the DLL matching the target architecture.

- `calc32.dll` → 32-bit process
- `calc64.dll` → 64-bit process
