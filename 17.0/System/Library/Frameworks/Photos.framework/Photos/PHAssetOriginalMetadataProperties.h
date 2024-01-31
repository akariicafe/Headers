@class NSString, NSTimeZone;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *originalAssetsUUID;
@property (readonly, nonatomic) long long originalHeight;
@property (readonly, nonatomic) long long originalWidth;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) short originalExifOrientation;
@property (readonly, nonatomic) unsigned long long originalFilesize;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) int timeZoneOffset;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
