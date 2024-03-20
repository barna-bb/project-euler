#!/bin/bash

# Compile and Run
compile_and_run() {
    local problem_number="$1"
    local source_file="p${problem_number}.c"
    local compiled_dir="bin"
    local compiled_file="${compiled_dir}/p${problem_number}"

    # Check dir
    mkdir -p "${compiled_dir}"

    # Compile
    gcc "${source_file}" -o "${compiled_file}"

    # Run
    if [ $? -eq 0 ]; then
        "${compiled_file}"
        echo
    else
        echo "Compilation failed for ${source_file}"
    fi
}

# Check arg
if [ $# -eq 0 ]; then 
    echo "Usage: $0 <problem_number>"
    exit 1
fi

# Main
compile_and_run "$1"