cd build
del /S /Q "."
cmake .. -G "Ninja" 
ninja
cliEngine.exe