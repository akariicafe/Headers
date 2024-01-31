@class NSArray, GEOMapItemReviewsAttribution;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {
    GEOMapItemReviewsAttribution *_geoReviewsAttribution;
}

@property (readonly, nonatomic) NSArray *addReviewURLs;

- (void).cxx_destruct;
- (id)urlsForReview:(id)a0;
- (id)urlsForSelectedItemWithItems:(id)a0;
- (id)initWithGEOMapItemAttribution:(id)a0;

@end
