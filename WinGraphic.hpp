/**
 * @file WinGraphic.hpp
 * @version 0.0.1
 * @author Copyright (C) 2023 by nashdev255
 * @brief handmade library for graphics of C++ Games
 * 
*/

#ifndef WINGRAPHIC_H
#define WINGRAPHIC_H

using std::int8_t;
using std::u32string;

constexpr int8_t COL8_BLACK         = 0x00;
constexpr int8_t COL8_DARK_BLUE		= 0x01;
constexpr int8_t COL8_DARK_GREEN    = 0x02;
constexpr int8_t COL8_DARK_CYAN		= 0x03;
constexpr int8_t COL8_DARK_RED		= 0x04;
constexpr int8_t COL8_DARK_VIOLET	= 0x05;
constexpr int8_t COL8_DARK_YELLOW	= 0x06;
constexpr int8_t COL8_GRAY          = 0x07;
constexpr int8_t COL8_LIGHT_GRAY	= 0x08;
constexpr int8_t COL8_BLUE          = 0x09;
constexpr int8_t COL8_GREEN         = 0x0a;
constexpr int8_t COL8_CYAN          = 0x0b;
constexpr int8_t COL8_RED           = 0x0c;
constexpr int8_t COL8_VIOLET        = 0x0d;
constexpr int8_t COL8_YELLOW        = 0x0e;
constexpr int8_t COL8_WHITE         = 0x0f;

constexpr int8_t COL8_INTENSITY     = 0x08;		//	高輝度マスク
constexpr int8_t COL8_RED_MASK		= 0x04;
constexpr int8_t COL8_GREEN_MASK    = 0x02;
constexpr int8_t COL8_BLUE_MASK     = 0x01;

void cout32_f(char32_t ch);
void cout32_f(const char32_t *ptr);
void cout32_f(const char32_t *ptr, int8_t len);
void cout32_f(const u32string &str);

void setColor(int8_t col);
void setColor(int8_t fg, int8_t bg);
void setCursorPos(int8_t x, int8_t y);
bool isKeyPressed(int8_t vKey);

#endif
