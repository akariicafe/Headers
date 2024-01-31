@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (int)analysisStateForWorkerType:(short)a0 outLastIgnoreDate:(id *)a1 outIgnoreUntilDate:(id *)a2;

@end
