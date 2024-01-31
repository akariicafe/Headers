@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (id)propertiesToSortBy;
+ (BOOL)useObjectFetchingContext;

@end
