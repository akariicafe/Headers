@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForPurchaseLookup;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForFeaturedArticles;

- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
