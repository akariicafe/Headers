@class NSString, GEOPDRatingData, NSMapTable;

@interface GEORatingSummary : NSObject {
    GEOPDRatingData *_ratingData;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic, getter=isAppleRating) BOOL appleRating;
@property (readonly, nonatomic) float normalizedUserRatingScore;
@property (readonly, nonatomic) float sampleSizeUsedForScore;

- (void).cxx_destruct;
- (float)_normalizedFirstPartyUserRatingScore;
- (float)_normalizedThirdPartyUserRatingScore;
- (id)initWithRatingData:(id)a0 attributionMap:(id)a1;

@end
