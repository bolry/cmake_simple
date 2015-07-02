/*
 * retweetcollection.h
 *
 *  Created on: Jun 10, 2015
 *      Author: bo
 */

#ifndef RETWEETCOLLECTION_H_
#define RETWEETCOLLECTION_H_

class Tweet {
};

class RetweetCollection {
public:
	RetweetCollection() :
			empty_(true)
	{
	}
	bool isEmpty() const
	{
		return empty_;
	}
	void add(Tweet const&)
	{
		empty_ = false;
	}
	unsigned int size() const
	{
		return isEmpty() ? 0 : 1;
	}
	void remove(Tweet const &)
	{
		empty_ = true;
	}
private:
	bool empty_;
};

#endif /* RETWEETCOLLECTION_H_ */
