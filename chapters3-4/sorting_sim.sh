#!/bin/bash

make sorting_sim_random
make sorting_sim_reverse
make sorting_sim_almost
make sorting_sim_sorted

./sorting_sim_random > results.txt
echo "" >> results.txt
./sorting_sim_reverse >> results.txt
echo "" >> results.txt
./sorting_sim_almost >> results.txt
echo "" >> results.txt
./sorting_sim_sorted >> results.txt