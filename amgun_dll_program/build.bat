cl /D"WINDOWS_PLATFORM" /D"BUILD_MY_DLL" /I"incl" /LD Shared.cpp /link /LIBPATH:"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.38.33130\lib\x64" /LIBPATH:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22621.0\um\x64" /LIBPATH:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22621.0\ucrt\x64"  /IMPLIB:'LIBCMT.lib' /IMPLIB:'kernel.lib' /IMPLIB:'libucrt.lib'

cl /D"WINDOWS_PLATFORM" /D"BUILD_MY_DLL" /I"incl" Run.cpp Shared.obj /link /LIBPATH:"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.38.33130\lib\x64" /LIBPATH:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22621.0\um\x64" /LIBPATH:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22621.0\ucrt\x64"  /IMPLIB:'LIBCMT.lib' /IMPLIB:'kernel.lib' /IMPLIB:'libucrt.lib' 