#ifndef COLOR_H
#define COLOR_H

#include <stdio.h>

// Macros for colored text with direct `printf` usage
#define RED(text)    "\033[0;31m"text"\033[0m"
#define GREEN(text)  "\033[0;32m"text"\033[0m"
#define YELLOW(text) "\033[0;33m"text"\033[0m"
#define BLUE(text)   "\033[0;34m"text"\033[0m"
#define MAGENTA(text) "\033[0;35m"text"\033[0m"
#define CYAN(text)   "\033[0;36m"text"\033[0m"
#define WHITE(text)  "\033[0;37m"text"\033[0m"
#define RESET()      printf("\033[0m")

// Bold versions
#define BOLD_RED(text)    "\033[1;31m"text"\033[0m"
#define BOLD_GREEN(text)  "\033[1;32m"text"\033[0m"
#define BOLD_YELLOW(text) "\033[1;33m"text"\033[0m"
#define BOLD_BLUE(text)   "\033[1;34m"text"\033[0m"
#define BOLD_MAGENTA(text) "\033[1;35m"text"\033[0m"
#define BOLD_CYAN(text)   "\033[1;36m"text"\033[0m"
#define BOLD_WHITE(text)  "\033[1;37m"text"\033[0m"


#include <stdio.h>

// Function prototypes for starting and stopping colors
static inline void ASHU_RED() {
    printf("\033[0;31m");
}

static inline void ASHU_GREEN() {
    printf("\033[0;32m");
}

static inline void ASHU_YELLOW() {
    printf("\033[0;33m");
}

static inline void ASHU_BLUE() {
    printf("\033[0;34m");
}

static inline void ASHU_MAGENTA() {
    printf("\033[0;35m");
}

static inline void ASHU_CYAN() {
    printf("\033[0;36m");
}

static inline void ASHU_WHITE() {
    printf("\033[0;37m");
}

static inline void ASHU_BOLD_RED() {
    printf("\033[1;31m");
}

static inline void ASHU_BOLD_GREEN() {
    printf("\033[1;32m");
}

static inline void ASHU_BOLD_YELLOW() {
    printf("\033[1;33m");
}

static inline void ASHU_BOLD_BLUE() {
    printf("\033[1;34m");
}

static inline void ASHU_BOLD_MAGENTA() {
    printf("\033[1;35m");
}

static inline void ASHU_BOLD_CYAN() {
    printf("\033[1;36m");
}

static inline void ASHU_BOLD_WHITE() {
    printf("\033[1;37m");
}

// Function to reset the color
static inline void ASHU_OFF() {
    printf("\033[0m");
}

#endif 