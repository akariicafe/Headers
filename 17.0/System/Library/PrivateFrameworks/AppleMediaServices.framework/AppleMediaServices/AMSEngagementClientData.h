@class NSURL, NSMutableDictionary, NSString;

@interface AMSEngagementClientData : NSObject

@property (class, readonly, nonatomic) NSURL *clientDataURL;

@property (retain, nonatomic) NSMutableDictionary *apps;
@property (retain, nonatomic) NSString *lastSyncedBuild;

+ (void)erase;
+ (void)_registerNotifications;
+ (id)_fetchClientData;
+ (BOOL)_isDaemon;
+ (void)_assertEngagementd;
+ (id)loadFromDisk;
+ (id)_sharedQueue;

- (id)initWithCacheObject:(id)a0;
- (id)destinationsForEvent:(id)a0;
- (id)_appForIdentifier:(id)a0;
- (id)cachedResponseDataForEvent:(id)a0;
- (void)saveToDisk;
- (void)setAllowedEvents:(id)a0 appIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)addCachedResponseData:(id)a0 cacheInfo:(id)a1 appIdentifier:(id)a2;
- (void)_setApp:(id)a0 forIdentifier:(id)a1;
- (void)_enumerateAppsWithBlock:(id /* block */)a0;

@end
