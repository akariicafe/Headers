@class NSString;

@interface PHAssetDescriptionProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *assetDescription;
@property (readonly, copy, nonatomic) NSString *accessibilityDescription;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
