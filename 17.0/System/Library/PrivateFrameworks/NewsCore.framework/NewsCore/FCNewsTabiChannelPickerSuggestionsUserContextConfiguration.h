@class NSDictionary;

@interface FCNewsTabiChannelPickerSuggestionsUserContextConfiguration : NSObject

@property (nonatomic) long long maximumTagCount;
@property (nonatomic) long long maximumTopicTagsPerHeadline;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;

@end
