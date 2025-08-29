@echo off
gcc add.c -o adder.exe
if %ERRORLEVEL% neq 0 (
  echo Build failed
  exit /b 1
)

echo Running quick test (2 + 3)...
adder.exe 2 3
