clang++ -DWINDOWS_PLATFORM -DBUILD_MY_DLL -I"incl" -shared Shared.cpp -o Shared.dll

clang++ -DWINDOWS_PLATFORM -I"incl" Executable.cpp -o launcher.exe -lShared
