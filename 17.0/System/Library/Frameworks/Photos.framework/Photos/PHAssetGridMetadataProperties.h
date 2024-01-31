@class NSString;

@interface PHAssetGridMetadataProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *originalFilename;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
