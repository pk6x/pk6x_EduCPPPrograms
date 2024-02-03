clang++ -DWINDOWS_PLATFORM -DBUILD_MY_DLL -I"incl" -shared Shared.cpp -o Shared.dll

clang++ -DWINDOWS_PLATFORM -I"incl" -lShared Run.cpp -o Run.exe
