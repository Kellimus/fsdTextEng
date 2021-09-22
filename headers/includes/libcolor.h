/* Original libcolor.h written by Lewin Sorg (spezialcoder) and acquired from github.com/spezialcoder
 * Edited for use in Firestorm Design projects by Kelly Christus
 * 
 * Necessary information:
 * Use the setForegroundColor & setBackgroundColor functions for full custom 24-bit colors
 * The setAttribute() function should be called prior to any colorization to follow terminal norms/standards
 * Use the std::string(s) under the //Turn off attributes to reset attributes but keep colorization
 * Use reset() to normalize terminal output completely; resets colors, attributes; everything.
 * 
 * To do:
 * Figure out a way to add more arguments in setAttribute() function to cut down on function calls; perhaps change to a variadic function?
*/

#ifndef LIBCOLOR_H
#define LIBCOLOR_H
#include <string>
#include <iostream>
class text_decor
{
	public:
	
		// Turn on attributes
		inline static const std::string bold = "\x1b[1m";
		inline static const std::string dim = "\x1b[2m"; // May not be widely supported
		inline static const std::string italic = "\x1b[3m"; // May not be widely supported
		inline static const std::string underline = "\x1b[4m";
		inline static const std::string blink = "\x1b[5m"; // May not always work due to various terminal restrictions
		inline static const std::string reverse = "\x1b[7m"; // Invert the foreground and background colors
		inline static const std::string hidden = "\x1b[8m"; // Hides input — Useful for passwords
		inline static const std::string strikeout = "\x1b[9m"; // Strikeout; perhaps rarely used in shells — MAKE SURE TO RESET WITH [0m
		inline static const std::string doubleUnderline = "\x1b[21m"; // Double Underline
		
		// Turn off attributes
		inline static const std::string unbold = "\x1b[22m";
		inline static const std::string unitalic = "\x1b[23m";
		inline static const std::string offUnderline = "\x1b[24m";
		inline static const std::string offBlink = "\x1b[25m";
		inline static const std::string unStrike = "\x1b[29m";
		
		static inline void setAttribute(std::string attr)
		{
			std::string a = attr;
			std::cout << a;
		}
		
		static inline void setUnderlineColor(int red, int green, int blue)
		{
			int a = red; int b = green; int c = blue;
			std::cout << "\x1b[58;2;" << a << ";" << b << ";" << c << "m";
		}
		
		static inline void setForegroundColor(int red, int green, int blue)
		{
			int a = red; int b = green; int c = blue;
			std::cout << "\x1b[38;2;" << a << ";" << b << ";" << c << "m";
		}
		
		static inline void setBackgroundColor(int red, int green, int blue)
		{
			int a = red; int b = green; int c = blue;
			std::cout << "\x1b[48;2;" << a << ";" << b << ";" << c << "m";
		}
		
		static inline void reset()
		{
			std::cout << "\x1b[0m";
		}
};
#endif
