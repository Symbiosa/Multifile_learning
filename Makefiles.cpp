// Makefiles automates the process  #For linux / mac (Yikers)

// file1.cpp file2.cpp
//    |         |
//    |         |
//    V         V
// file1.o  file2.o         Ability to link files to be dependant on specific files
//    \         / 
//     \       /
//      \     /
//       \   /
//        a.out

makefile
file1.o:file1.cpp

// g++ file.cpp will update file1.o