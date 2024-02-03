clang++ -DBUILD_MY_DLL -DSHARED_LIB -I"incl" -shared applib.cpp -o applib.dll

clang++ -DBUILD_MY_DLL -I"incl" launcher_test.cpp -o launcher_test.exe -lapplib