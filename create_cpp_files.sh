#!/bin/bash

for i in {1..50}
do
    formatted_number=$(printf "%02d" $i)
    touch "b-$formatted_number.cpp"
    echo "" >> "b-$formatted_number.cpp"
    echo "#include <iostream>" >> "b-$formatted_number.cpp"
    echo "" >> "b-$formatted_number.cpp"
    echo "using namespace std;" >> "b-$formatted_number.cpp"
    echo "" >> "b-$formatted_number.cpp"
    echo "int main() {" >> "b-$formatted_number.cpp"
    echo "    // Your code here" >> "b-$formatted_number.cpp"
    echo "    return 0;" >> "b-$formatted_number.cpp"
    echo "}" >> "b-$formatted_number.cpp"
    echo "Created b-$formatted_number.cpp"
done