#!/bin/bash

GREEN="\033[1;32m"
RED="\033[1;31m"
YELLOW="\033[1;33m"
CYAN="\033[1;36m"
WHITE="\033[1;37m"
RESET="\033[0m"

clear

echo -e "${CYAN}===================================================${RESET}"
echo -e "${WHITE}                LIBFT UNIT TESTER                  ${RESET}"
echo -e "${CYAN}===================================================${RESET}"

FILTER=${1:-$funct}

if [ -z "$FILTER" ]; then
    echo -e "${YELLOW}[!] Building libft.a (Full Suite)...${RESET}"
    TARGET_FILES=$(ls src/test_*.c 2>/dev/null)
else
    CLEAN_FILTER=$(echo "$FILTER" | sed 's/ft_//')
    echo -e "${YELLOW}[!] Building libft.a (Target: ft_${CLEAN_FILTER})...${RESET}"
    TARGET_FILES=$(ls src/test_${CLEAN_FILTER}.c 2>/dev/null)
    
    if [ -z "$TARGET_FILES" ]; then
        echo -e "${RED}[ERROR] No test file found for 'ft_${CLEAN_FILTER}'${RESET}"
        echo -e "${YELLOW}Make sure 'src/test_${CLEAN_FILTER}.c' exists.${RESET}"
        echo -e "${CYAN}===================================================${RESET}"
        exit 1
    fi
fi

make -C ../ > /dev/null 2>&1

if [ ! -f "../libft.a" ]; then
    echo -e "${RED}[ERROR] Compilation of 'libft.a' failed!${RESET}"
    echo -e "${CYAN}===================================================${RESET}"
    exit 1
fi

echo -e "${GREEN}[V] Library ready!${RESET}"
echo -e "${CYAN}===================================================${RESET}"
echo -e "${WHITE}                RUNNING FUNCTIONS                  ${RESET}"
echo -e "${CYAN}===================================================${RESET}"

GLOBAL_FAILS=0

for test_file in $TARGET_FILES; do
    func_name=$(basename "$test_file" .c | sed 's/test_//')
    
    printf "${WHITE}%-18s${RESET} : " "ft_$func_name"

    make -f Makefile compile TEST_SRC="$test_file" > /dev/null 2>&1
    if [ $? -ne 0 ]; then
        echo -e "${YELLOW}[COMPILATION ERROR / NOT FOUND]${RESET}"
        GLOBAL_FAILS=$((GLOBAL_FAILS + 1)) 
        continue
    fi

    ./test_elf
    TEST_RESULT=$? 
    
    GLOBAL_FAILS=$((GLOBAL_FAILS + TEST_RESULT))

    rm -f test_elf
done

echo -e "${CYAN}===================================================${RESET}"
echo -e "${WHITE}                  FINAL VERDICT                     ${RESET}"
echo -e "${CYAN}===================================================${RESET}"

if [ $GLOBAL_FAILS -eq 0 ]; then
    echo -e "${GREEN}   🎉 CONGRATULATIONS! All target tests passed! 🎉${RESET}"
else
    echo -e "${RED}       ❌ Total failed subtests detected: $GLOBAL_FAILS${RESET}"
fi

rm -f sandbox_*.txt

echo -e "${CYAN}===================================================${RESET}\n"