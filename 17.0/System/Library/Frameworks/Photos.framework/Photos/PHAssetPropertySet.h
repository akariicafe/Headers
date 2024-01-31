@class NSString, PHAsset;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet>

@property (class, readonly, nonatomic) NSString *propertySetName;

@property (readonly, weak, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;
+ (BOOL)inverseIsToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
+ (id)propertiesToPrefetch;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
