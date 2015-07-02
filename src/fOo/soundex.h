/*
 * soundex.h
 *
 *  Created on: Jun 10, 2015
 *      Author: bo
 */

#ifndef SOUNDEX_H_
#define SOUNDEX_H_

#include <string>

class Soundex {
public:
	std::string encode(std::string const & word);
private:
	std::string zeroPad(std::string const & word);
};

#endif /* SOUNDEX_H_ */
