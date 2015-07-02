/*
 * soundex.cpp
 *
 *  Created on: Jun 10, 2015
 *      Author: bo
 */

#include <soundex.h>

std::string Soundex::encode(const std::string& word)
{
	return zeroPad(word);
}

std::string Soundex::zeroPad(const std::string& word)
{
	return word + "000";
}
