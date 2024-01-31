@class NSDictionary;

@interface FCNewsTabiRecommendedIssuesUserContextConfiguration : NSObject

@property (nonatomic) long long maximumTagCount;
@property (nonatomic) long long maximumTopicTagsPerHeadline;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)initWithMaximumTagCount:(long long)a0 maximumTopicTagsPerHeadline:(long long)a1;

@end
