#!/bin/bash
# Author: ADAMU M. MUHAMMAD aka AdamsGeeky
# Date: 15, 2023
# Description: Create the Course folders and file 

# Ask the user for the number of months
read -p "Enter the number of months to create: " NUM_MONTHS

# Validate user input (ensure it's a positive integer)
if ! [[ "$NUM_MONTHS" =~ ^[1-9][0-9]*$ ]]; then
    echo "Invalid input. Please enter a positive integer for the number of months."
    exit 1
fi

# Qoutes
# Define an array to store the quotes
quotes=(
    "Knowledge is of no value unless you put it into practice. - Anton Chekhov"
    "Programming is not about typing, it's about thinking. - Rich Hickey"
    "The only way to do great work is to love what you do. - Steve Jobs"
    "Learning never exhausts the mind. - Leonardo da Vinci"
    "The best way to predict the future is to invent it. - Alan Kay"
    "Programming isn't about what you know; it's about what you can figure out. - Chris Pine"
    "An investment in knowledge pays the best interest. - Benjamin Franklin"
    "Simplicity is the soul of efficiency. - Austin Freeman"
    "The art of debugging is figuring out what you really told your program to do. - Andrew Singer"
    "Learning is not attained by chance; it must be sought for with ardor and attended to with diligence. - Abigail Adams"
    "Innovation distinguishes between a leader and a follower. - Steve Jobs"
    "You don't have to be a genius to code; you just have to be yourself. - Danese Cooper"
    "The most important skill you can develop as a programmer is the ability to learn. - Kent Beck"
    "Solving big problems is easier than solving little problems. - Sergey Brin"
    "Technology empowers people to do what they want to do. It lets people be creative. - Tim Cook"
    "Technology is just a tool. In terms of getting the kids working together and motivating them, the teacher is the most important. - Bill Gates"
    "The best way to learn is to teach. - Frank Oppenheimer"
    "The computer was born to solve problems that did not exist before. - Bill Gates"
    "Knowledge is power, but enthusiasm pulls the switch. - Ivern Ball"
    "The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt"
    "Practical knowledge is the truest wisdom. - Charles H. Spurgeon"
    "Coding is today's language of creativity. - Maria Klawe"
    "The beautiful thing about learning is that no one can take it away from you. - B.B. King"
    "Simplicity is the ultimate sophistication. - Leonardo da Vinci"
    "Every problem is an opportunity in disguise. - John Adams"
    "The best way to predict your future is to create it. - Peter Drucker"
    "The art of learning is the art of discovery. - Diane Wilson"
    "Great software, likewise, requires a fanatical devotion to beauty. If you look inside good software, you find that parts no one is ever supposed to see are beautiful too. - Paul Graham"
    "Education is the passport to the future, for tomorrow belongs to those who prepare for it today. - Malcolm X"
    "Technology is anything that wasn't around when you were born. - Alan Kay"
)
# Number of weeks
NUM_WEEKS=4
DAYS=5

# Loop through each month
for ((month=1; month<=$NUM_MONTHS; month++)); do
    # Create the month folder
    mkdir -p "Month$month"

    # Create the README.md file inside the month folder
    touch "Month$month/README.md"
    echo "# Month $month" >> "Month$month/README.md"

    # Loop through each week in the month
    for ((week=1; week<=$NUM_WEEKS; week++)); do
        # Create the week folder
        mkdir -p "Month$month/Week$week"

        # Create the README.md file inside the week folder
        touch "Month$month/Week$week/README.md"

        # Add content to the week's README.md files (optional)
        echo "# Week $week of Month $month" >> "Month$month/Week$week/README.md"
    
    # Loop through each week in the month
        for((Day=1; Day<=DAYS; Day++)); do
        
        # Create the Days Folder
        mkdir -p "Month$month/Week$week/Day$Day"
        mkdir -p "Month$month/Week$week/Day$Day/lesson"
        

        # Create the README.md file inside the Day Folder
        touch "Month$month/Week$week/Day$Day/README.md"
        touch "Month$month/Week$week/Day$Day/lesson/notes.md"

        # content to README.md
        # Get a random quote
        random_index=$((RANDOM % ${#quotes[@]}))
        random_quote="${quotes[random_index]}"
        echo "$random_quote" >> "Month$month/Week$week/Day$Day/README.md"
        
        # Get a random quote
        random_index=$((RANDOM % ${#quotes[@]}))
        random_quote="${quotes[random_index]}"
        echo "$random_quote" >> "Month$month/Week$week/Day$Day/lesson/notes.md"
        done
        # Add content to the Assignment folder (e.g., Assignment.txt)
        mkdir -p "Month$month/Week$week/project/"
        touch "Month$month/Week$week/project/README.md"
        echo "# project task for Week $week of Month $month" >> "Month$month/Week$week/project/README.md"
    done
done

echo "Folders and README.md files created successfully!"
