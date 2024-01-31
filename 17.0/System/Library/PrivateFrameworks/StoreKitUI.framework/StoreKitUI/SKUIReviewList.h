@class NSMutableDictionary, NSString, NSURL, NSDictionary, NSMutableArray;

@interface SKUIReviewList : NSObject <SKUICacheCoding> {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSMutableArray *reviews;
@property (readonly, nonatomic) long long numberOfPages;
@property (readonly, nonatomic) long long ratingCount;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) long long fiveStarRatingCount;
@property (readonly, nonatomic) long long fourStarRatingCount;
@property (readonly, nonatomic) long long oneStarRatingCount;
@property (readonly, nonatomic) long long threeStarRatingCount;
@property (readonly, nonatomic) long long twoStarRatingCount;
@property (readonly, nonatomic) NSURL *writeReviewURL;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
