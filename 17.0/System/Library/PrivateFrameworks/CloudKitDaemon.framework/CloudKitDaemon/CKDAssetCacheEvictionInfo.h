@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject

@property (readonly, nonatomic) BOOL forced;
@property (readonly, nonatomic) BOOL evictNow;
@property BOOL clearRegisteredItems;
@property (readonly, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (readonly, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (void).cxx_destruct;
- (id)initWithForced:(BOOL)a0 evictNow:(BOOL)a1;

@end
