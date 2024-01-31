@class NSArray;

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addReviewURLs;

- (id)initWithSearchAttributionInfo:(id)a0 attributionURLs:(id)a1 poiID:(id)a2;
- (id)initWithSearchAttributionInfo:(id)a0 attributionURLs:(id)a1 yelpID:(id)a2;
- (id)urlsForReview:(id)a0;
- (id)urlsForSelectedItemWithItems:(id)a0;

@end
