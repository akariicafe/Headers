@class NSString;

@interface FCSportsUpsellConfig : NSObject

@property (nonatomic) long long quiescenceInterval;
@property (nonatomic) long long engagedUserQuiescenceInterval;
@property (nonatomic) long long minNumberOfArticlesRead;
@property (nonatomic) long long maxNumberOfPresentations;
@property (nonatomic) NSString *landingPageArticleID;
@property (nonatomic) long long maxNumberOfTopics;

- (id)initWithConfigDictionary:(id)a0;

@end
