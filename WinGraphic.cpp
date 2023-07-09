/**
 * @file WinGraphic.cpp
 * @version 0.0.1
 * @author Copyright (C) 2023 by nashdev255
 * @brief handmade library for graphics of C++ Games
 * 
*/

#include "WinGraphic.hpp"
#include <windows.h>
#include <string>

/**
 * print a character
 * 
 * @param ch character
 * @note typedef void *HANDLE
 * @note typedef unsigned long DWORD
 * @note 
*/
void cout32_f(char32_t ch) {
    HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD len = 1;
    WriteConsoleW(hCons, &ch, len, &len, 0);
}