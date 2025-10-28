#!/bin/bash

# Read a single line from stdin
echo "Enter your name:"
read name
echo "Hello, $name!"

# Read multiple values
echo "Enter your full name (first last):"
read first last
echo "First: $first, Last: $last"

# Read without showing prompt (silent)
echo "Enter password:"
read -s password
echo "Password received!"

# Read with timeout
echo "You have 5 seconds to type something:"
read -t 5 input
echo "You typed: $input"