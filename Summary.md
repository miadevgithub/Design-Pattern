# DESIGN PATTERN SUMMARY

## Singleton
1. Memory Leakage
* Solve with function below :
``` C++
int atexit()
{
    void (__cdecl *func )(void);
}

atexit(release);
```
