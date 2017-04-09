# Priority Scheduler
CPU Scheduling using Priority Scheduling algorithm

## Priority Scheduling Algorithm
Priority Scheduler schedules the processes in the CPU using the priority scheduling algorithm. In the Priority scheduling algorithm is one of the most algorithms used for process scheduling in the batch system. Each process is assigned a priority and based on the priority the process is executed. Processes with same priority are executed based on first come first serve basis. The priority is calculated based on the memory requirements, time requirements and other resource requirement.


## Implementation
1. A list with process ids and their priority is maintained.
2. The list is sorted in the descending order of the priority of the process.
3. The one with the highest priority is executed first and removed from the list

## Setup

Intel c++ compiler or Microsoft Visual C++ compiler is required for executing.

1. Clone the repository in the local machine.
2. Change the directory to /PriorityQueue
3. Compile the program with the command "gcc priority_implementation.cpp"
4. Run the command "./a.out" 
5. Input the parameters based on the prompt on the screen

## Contact

The issues can be created in the "https://github.com/varshateratipally/PriorityQueue/"


This repository is created as a part of the course CSCI4830-009
