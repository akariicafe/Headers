@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (id)propertiesToSortBy;
+ (BOOL)useObjectFetchingContext;

@end
