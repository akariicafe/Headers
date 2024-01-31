@interface FCAppReviewRequestConfig : NSObject

@property (readonly, nonatomic) long long quiescenceInterval;
@property (readonly, nonatomic) long long minNumberOfLikedArticles;
@property (readonly, nonatomic) long long minNumberOfSavedArticles;
@property (readonly, nonatomic) long long minNumberOfSharedArticles;
@property (readonly, nonatomic) long long minNumberOfEndOfArticleReads;
@property (readonly, nonatomic) long long minNumberOfCombinedActions;

- (id)initWithDictionary:(id)a0;

@end
