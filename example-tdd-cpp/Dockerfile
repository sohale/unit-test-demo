# Start from a base Ubuntu image
FROM ubuntu:latest

# Install necessary tools: g++
RUN apt-get update && \
    apt-get install -y gcc g++ cppcheck clang-tidy lcov && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# Install necessary tools: clang
RUN apt-get install -y clang clang-tidy lcov cppcheck && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*
