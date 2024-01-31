@interface VSCacheDeleteService : NSObject

+ (id)sharedService;

- (BOOL)registerCacheDelete;
- (id)purge:(id)a0 urgency:(int)a1;
- (id)purgeImpl:(id)a0 urgency:(int)a1;
- (id)purgeable:(id)a0 urgency:(int)a1;
- (long long)totalSizeOfAssets:(id)a0;
- (id)periodic:(id)a0 urgency:(int)a1;
- (id)purgeableAssetsWithInfo:(id)a0 urgency:(int)a1;

@end
