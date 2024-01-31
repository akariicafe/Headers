@class AMSEngagementCacheDatabase;

@interface AMSEngagementCache : NSObject

@property (retain, nonatomic) AMSEngagementCacheDatabase *database;

+ (id)sharedInstance;

- (void)dealloc;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)cacheResponse:(id)a0 filter:(id)a1 expiration:(id)a2;
- (id)cachedResponseForEvent:(id)a0;

@end
