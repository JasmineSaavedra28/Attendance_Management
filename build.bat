g++ -std=c++17 -Wall -I./include -c ./src/AttendanceManagement.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Course.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Student.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp

g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include AttendanceManagement.o Course.o Student.o main.o -o main.exe

main.exe

del *.o
