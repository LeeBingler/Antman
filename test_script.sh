#!/usr/bin/env bash
##
## EPITECH PROJECT, 2023
## script.sh
## File description:
## a script that executes antman binary with a test file and redirects its output to a temporary
## file. It then executes giantman binary with the temporary file as a parameter and redirects the
## output to another temporary file. Finally it compared the second temporary file to the original test file.
##

function antman_to_file()
{
    ./antman/antman $1 $2 > ../antman.txt
    var=$(echo $?)
    if [ var == 84 ]; then
        printf "Error compression for $1\n"
        return 1
    fi
    echo "$1"
    return 0
}

function giantman_to_file()
{
    ./giantman/giantman ../antman.txt $2 > ../giantman.txt
    result=$(echo $?)
    if [ $result == 84 ]; then
        printf "Error in decompression for $1\n"
        return 1
    fi
    diff -s $1 ../giantman.txt
    return 0
}

function compare_two_size_file()
{
    original_file=$(stat -c %s $1)
    compressed_file=$(stat -c %s $2)
    if [ $original_file == 0 ]; then
        printf "$1 is empty\n"
        return 1
    fi
    percent=$((((compressed_file * 100) / original_file)))
    printf "The file was compressed and reduced to %d%% of its size.\n" $percent
    return 0
}

function test_all()
{
    file=$1
    case "${file##*.}" in
        html)
            antman_to_file $file 1
            if [ $(echo $?) != 0 ]; then
                return 84
            fi
            compare_two_size_file $file ../antman.txt
            if [ $(echo $?) != 0 ]; then
                return 84
            fi
            giantman_to_file $file 1
            printf "\n"
            ;;
        ppm)
            antman_to_file $file 2
            if [ $(echo $?) != 0 ]; then
                return 84
            fi
            compare_two_size_file $file ../antman.txt
            if [ $(echo $?) != 0 ]; then
                return 84
            fi
            giantman_to_file $file 2
            printf "\n"
            ;;
    esac
}

function main()
{
    make
    printf "\n"
    for dir in test_file/*; do
        if [ -d "$dir" ]; then
            for file in $dir/*; do
                if [ -f "$file" ]; then
                    test_all $file
                    if [ $(echo $?) == 84 ]; then
                       exit 84
                    fi
                fi
            done
        fi
    done
}

main
