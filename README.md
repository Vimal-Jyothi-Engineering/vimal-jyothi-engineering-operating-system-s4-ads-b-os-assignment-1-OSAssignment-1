# OS Lab Assignment – Shortest Job First (SJF) Scheduling

## Problem Statement
Write a C program to implement **Non-Preemptive Shortest Job First (SJF)** CPU scheduling.  
Your program must:
- Accept the number of processes
- Read burst times for each process
- Sort them based on burst time
- Compute Waiting Time (WT) and Turnaround Time (TAT)
- Display Gantt Chart, WT, TAT, and average values

## Input Format
Input is taken from STDIN in the following format:
N
burst_time1 burst_time2 burst_time3 ...

Example:
3
4 2 1

## Output Format
Process-wise table:

Process   Burst Time   Waiting Time   Turnaround Time

And:

Average Waiting Time: X
Average Turnaround Time: Y

## Files Provided
- `src/sjf.c` – starter template
- `tests/input1.txt`, `tests/input2.txt`
- Expected outputs for autograding
- `tests/test.sh` – autograding script

## How to Compile
gcc sjf.c -o sjf

## How to Run
./sjf < tests/input1.txt

