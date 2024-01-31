@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSSet *keywordTitles;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
