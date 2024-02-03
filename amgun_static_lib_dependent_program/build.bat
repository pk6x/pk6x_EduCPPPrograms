clang++ -c -I"incl" bye_fn.cpp hello_fn.cpp 

llvm-lib *.o /out:"myStaticLib.lib"