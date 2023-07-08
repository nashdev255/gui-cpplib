/**
 * @file WinGraphic.hpp
 * @version 0.0.1
 * @author Copyright (C) 2023 by nashdev255
 * @brief handmade library for graphics of C++ Games
 * 
*/

#define		COL8_BLACK          0x00
#define		COL8_DARK_BLUE		0x01
#define		COL8_DARK_GREEN     0x02
#define		COL8_DARK_CYAN		0x03
#define		COL8_DARK_RED		0x04
#define		COL8_DARK_VIOLET	0x05
#define		COL8_DARK_YELLOW	0x06
#define		COL8_GRAY           0x07
#define		COL8_LIGHT_GRAY		0x08
#define		COL8_BLUE           0x09
#define		COL8_GREEN          0x0a
#define		COL8_CYAN           0x0b
#define		COL8_RED            0x0c
#define		COL8_VIOLET	        0x0d
#define		COL8_YELLOW	        0x0e
#define		COL8_WHITE	        0x0f

#define		COL8_INTENSITY		0x08		//	高輝度マスク
#define		COL8_RED_MASK		0x04
#define		COL8_GREEN_MASK	    0x02
#define		COL8_BLUE_MASK	    0x01

using std::int8_t;
using std::u32string;

void print32_f(char32_t ch);
void print32_f(const char32_t *ptr);
void print32_f(const char32_t *ptr, std::int8_t len);
void print32_f(const u32string &str);

void setColor(int8_t col);
void setColor(int8_t fg, int8_t bg);
void setCursorPos(int8_t x, int8_t y);
bool isKeyPressed(int8_t vKey);
