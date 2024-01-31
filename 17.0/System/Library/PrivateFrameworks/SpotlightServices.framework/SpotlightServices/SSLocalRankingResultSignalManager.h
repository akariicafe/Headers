@interface SSLocalRankingResultSignalManager : NSObject

+ (id)_getSpotlightRecentEngagementAttributes;
+ (id)_getSpotlightRecentEngagementAttributesNonUnique;
+ (id)getSpotlightRecentEngagementAttributes;
+ (id)getSpotlightRecentEngagementAttributesNonUnique;
+ (id)updateRecentEngagementAttributes:(id)a0 queryString:(id)a1 renderPosition:(id)a2 engagementAttributes:(id)a3 unique:(BOOL)a4;

@end
