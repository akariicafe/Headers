@class NSData, NSDate;

@interface PHAssetVisualSearchProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *visualSearchData;
@property (readonly, nonatomic) float stickerConfidenceScore;
@property (readonly, nonatomic) long long stickerAlgorithmVersion;
@property (readonly, nonatomic) long long algorithmVersion;
@property (readonly, nonatomic) NSDate *adjustmentVersion;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
