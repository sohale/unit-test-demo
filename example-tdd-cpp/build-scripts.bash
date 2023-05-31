clang-tidy main.cpp -- -Imy_project/includes -std=c++14

cppcheck --enable=all main.cpp



sudo apt-get install lcov

g++ --coverage -O0 -o test tests.cpp

./test

lcov --capture --directory . --output-file coverage.info

genhtml coverage.info --output-directory out

pip install coverage

coverage run tests.py

coverage report

coverage html


docker build -t my_build_env .

docker run -it --rm -v $(pwd):/src my_build_env bash

docker build -t my_clang_build_env .

docker run -it --rm -v $(pwd):/src my_clang_build_env bash
