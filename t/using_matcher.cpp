#include "gmock/gmock.h"

#include "retweetcollection.h"

using namespace ::testing;

class ARetweetCollection: public Test {
public:
	RetweetCollection collection;
};

TEST_F(ARetweetCollection, IsEmptyWhenCreated)
{
	ASSERT_TRUE(collection.isEmpty());
}

TEST_F(ARetweetCollection, HasSizeZeroWhenCreated)
{
	ASSERT_THAT(collection.size(), Eq(0u));
}

MATCHER_P(HasSize, expected, ""){
return arg.size() == expected
&& arg.isEmpty() == (0 == expected);
}

TEST_F(ARetweetCollection, DecreasesSizeAfterRemovingTweet)
{
	collection.add(Tweet());
	collection.remove(Tweet());

	ASSERT_THAT(collection, HasSize(0u));
}
