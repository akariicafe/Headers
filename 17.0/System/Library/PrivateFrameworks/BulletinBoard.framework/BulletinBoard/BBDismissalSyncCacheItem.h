@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject

@property (readonly, nonatomic) NSMutableArray *dismissalDictionariesAndFeeds;
@property (readonly, nonatomic) NSMutableDictionary *dismissalIDToFeeds;

- (id)init;
- (id)findBulletinMatch:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)removeBulletinMatch:(id)a0;
- (void)cacheDismissalDictionaries:(id)a0 dismissalIDs:(id)a1 forFeeds:(unsigned long long)a2;
- (id)purgeExpired;

@end
